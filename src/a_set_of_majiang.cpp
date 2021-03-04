#include "majiang_card.cpp"
# include <string>

class a_Set_of_Majiang
{
private: 
    string hua_se[3] = {"tiao","tong","wan"};
    //Majiang_Card* majiang; //the first pointer of set of majiang
    int num_of_majiang_already_have;


public:
    a_Set_of_Majiang()
    {
        for(int j=0; j<3;j++) //every hua_se
        {
            for(int i=1; i<10; i++)//every shuzi
            {
                //cout<< this->hua_se[j]<< "   "<< i <<endl;
                //have 4 card, create a 4 cards
                Majiang_Card mj(this->hua_se[j],i);
                num_of_majiang_already_have++;
            }
        }
    };
    
    ~a_Set_of_Majiang(){
    };

    /* data */
};

