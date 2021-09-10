# include <string>
# include <vector>
# include <set>
#include <algorithm> 
#include "A_Card.cpp"

// using namespace std;


class A_Set_of_Cards
{
private: 
    //Majiang_Card* majiang; //the first pointer of set of majiang
    std::vector<A_Card> cards;
    std::vector<std::string> unique_patterns;

    void update_unique_patterns()
    {

    for(int i = 0; i < this->cards.size(); i++)
        {
            this->unique_patterns.push_back( this->cards[i].pattern );
        }; 

    std::sort( this->unique_patterns.begin(), this->unique_patterns.end() );
    this->unique_patterns.erase( std::unique( this->unique_patterns.begin(), this->unique_patterns.end() ), this->unique_patterns.end() );    
        
    };

public:

    int num_of_cards_left;
    //init a set of card
    A_Set_of_Cards()  : num_of_cards_left(0)
    {

    };
    
    ~A_Set_of_Cards(){
    };

    void wash() //init and wash the cards
    {
        //patterns cards have, remove this one and put them as an input variable
        std::string hua_se[] = {"Tiao","Tong","Wan"};
        // std::string hua_se[] = {"筒","条","万"};

        //for each pattern, init a set of cards with nums
        for(int j=0; j< sizeof(hua_se)/sizeof(hua_se[0]) ;j++) //every hua_se
        {
            for(int i=1; i<10; i++)//every shuzi
            {
                //have 4 card, create a 4 cards
                for(int x = 0; x < 4; x++)
                {
                    A_Card mj(hua_se[j], i,this->num_of_cards_left); 
                    this->add_a_card(mj);

                }
            }
        }

        std::random_shuffle( this->cards.begin(), this->cards.end() );
        std::cout << "                     " << std::endl;
        // this->print_cards_left();
    };

    void print_cards_left()
    {
        for(int i = 0; i < this->cards.size(); i++)
            {
                this->cards[i].print_this_card();
            };
        std::cout<<" "<<std::endl;
      
    };

    A_Card pop_a_card()
    {
        this->num_of_cards_left --;
        A_Card card_to_be_returned = this->cards.back();
        this->cards.pop_back();

        //update unique pattern
        this->update_unique_patterns();
        return card_to_be_returned;
    };


    void add_a_card(A_Card card)
    {
        this->cards.push_back(card);
        this->num_of_cards_left++;

        //update unique pattern        
        this->update_unique_patterns();                            
    };

    //sort card by it's num having grouped by patterns
    void sort()
    {
        std::vector<A_Card> cards_already_sorted;
        // for each unique pattern
        for (int i =0; i < this->unique_patterns.size() ; i ++)
        {
            std::string curren_pattern = this->unique_patterns[i];
            std::vector<A_Card> cards_to_be_sorted;
            for(int j = 0; j < this->cards.size(); j++)
            {
                //select it's all card
                if (curren_pattern == this->cards[j].pattern)
                {
                    cards_to_be_sorted.push_back(this->cards[j]);
                }
            };
            std::sort(cards_to_be_sorted.begin(), cards_to_be_sorted.end());

            // sort and put back
            for(int j = 0; j < cards_to_be_sorted.size(); j++)
            {
                cards_already_sorted.push_back(cards_to_be_sorted[j]);
            };

        };
        this->cards.clear();
        this->cards = cards_already_sorted;
    };



};

