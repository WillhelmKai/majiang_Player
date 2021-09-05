#include <iostream> 
# include <string>
// using namespace std;

class Majiang_Card
{
public:
    std::string hua_se;

    int belong_to, shu_zi, series_num; // the No. of Player, default to be -1 (to be drawed)

	Majiang_Card(std::string hua_se, int shu_zi,int series_num): hua_se(hua_se), shu_zi(shu_zi), series_num(series_num), belong_to(-1)
    {

        // cout << this->hua_se << "  "<< this->shu_zi << endl;
    };
	~Majiang_Card(){};


};