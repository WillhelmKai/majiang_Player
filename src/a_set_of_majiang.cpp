#include "majiang_card.cpp"
# include <string>
using namespace std;


class a_Set_of_Majiang
{
private: 
    //Majiang_Card* majiang; //the first pointer of set of majiang
    int num_of_majiang_already_have;


public:
    a_Set_of_Majiang()  : num_of_majiang_already_have(0)
    {
        
        string hua_se[] = {"tiao","tong","wan"};

        /*
        cout << sizeof(hua_se) <<endl;
        cout << sizeof(hua_se[0]) <<endl;
        */

        for(int j=0; j< sizeof(hua_se)/sizeof(hua_se[0]) ;j++) //every hua_se
        {
            for(int i=1; i<10; i++)//every shuzi
            {
                //cout<< this->hua_se[j]<< "   "<< i <<endl;
                //have 4 card, create a 4 cards
                Majiang_Card mj(hua_se[j], i); 
                num_of_majiang_already_have++;
            }
        }
    };
    
    ~a_Set_of_Majiang(){
    };

    /* data */
};

