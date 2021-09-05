# include <string>
# include <vector>
#include <algorithm> 
#include "majiang_card.cpp"

// using namespace std;


class a_Set_of_Majiang
{
private: 
    //Majiang_Card* majiang; //the first pointer of set of majiang
    int num_of_majiang_already_have;
    std::vector<Majiang_Card> cards;



public:
    //init a set of card
    a_Set_of_Majiang()  : num_of_majiang_already_have(0)
    {
        //patterns cards have, remove this one and put them as an input variable
        std::string hua_se[] = {"tiao","tong","wan"};

        //for each pattern, init a set of cards with nums
        for(int j=0; j< sizeof(hua_se)/sizeof(hua_se[0]) ;j++) //every hua_se
        {
            for(int i=1; i<10; i++)//every shuzi
            {
                //cout<< this->hua_se[j]<< "   "<< i <<endl;
                //have 4 card, create a 4 cards
                for(int x = 0; x < 4; x++)
                {
                    Majiang_Card mj(hua_se[j], i,num_of_majiang_already_have); 
                    cards.push_back(mj);
                    num_of_majiang_already_have++;                    
                }
            }
        }
        this->iterate_cards();
    };
    
    ~a_Set_of_Majiang(){
    };

    void wash_cards()
    {
        std::random_shuffle( this->cards.begin(), this->cards.end() );
        std::cout << "                     " << std::endl;
        this->iterate_cards();
    };

    void iterate_cards()
    {
        for(int i = 0; i < this->cards.size(); i++)
            {
                std::cout << this->cards[i].hua_se << "  "<< this->cards[i].shu_zi << std::endl;
            };
      
    };

    void get_a_card()
    {

    };

};

