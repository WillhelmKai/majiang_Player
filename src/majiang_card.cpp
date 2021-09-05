#include <iostream> 
# include <string>
// using namespace std;

class Majiang_Card
{
public:
    std::string hua_se;

    int shu_zi, series_num; // the No. of Player, default to be -1 (to be drawed)

	Majiang_Card(std::string hua_se, int shu_zi,int series_num): hua_se(hua_se), shu_zi(shu_zi), series_num(series_num)
    {


    };
	~Majiang_Card()
    {
    };

    void print_this_card()
    {
        std::cout << this->shu_zi << "  "<<  this->hua_se<< std::endl;
    };


};