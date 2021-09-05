# include <string>
# include <vector>
#include <algorithm> 
#include "majiang_card.cpp"

// using namespace std;


class a_Set_of_Majiang
{
private: 
    //Majiang_Card* majiang; //the first pointer of set of majiang
    std::vector<Majiang_Card> cards;


public:
    int num_of_cards_left;
    //init a set of card
    a_Set_of_Majiang()  : num_of_cards_left(0)
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
                    Majiang_Card mj(hua_se[j], i,num_of_cards_left); 
                    cards.push_back(mj);
                    num_of_cards_left++;                    
                }
            }
        }
    };
    
    ~a_Set_of_Majiang(){
    };

    void wash()
    {
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
      
    };

    Majiang_Card get_a_card()
    {
        this->num_of_cards_left --;
        Majiang_Card card_to_be_returned = this->cards.back();
        this->cards.pop_back();
        return card_to_be_returned;
    };

    std::vector<Majiang_Card> init_cards_for_a_player()
    {
        std::vector<Majiang_Card> cards_to_be_returned;
        for(int i = 0; i < 13; i ++)
            {
                cards_to_be_returned.push_back( this->get_a_card() );
            };  
        return cards_to_be_returned;
    };

};

