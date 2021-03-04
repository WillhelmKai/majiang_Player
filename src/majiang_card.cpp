#include <iostream> 
# include <string>
using namespace std;

class Majiang_Card
{
public:
    string hua_se, status;
    //status: can be seen by every body, can not be seen by every body
    int belong_to, shu_zi; // the No. of Player, default to be -1 (to be drawed)

	Majiang_Card(string hua_se, int shu_zi)
    //hua_se(hua_se), shu_zi(shu_zi), status("Not_Shown"), belong_to(-1)
    {
        this->hua_se = hua_se;
        this->shu_zi = shu_zi;

        cout << this->hua_se << "  "<< this->shu_zi << endl;
    };
	~Majiang_Card(){};
	
};