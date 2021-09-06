#include <iostream> 
# include <string>
// using namespace std;

class A_Card
{
private:

public:
    std::string pattern;

    int num, series_num; // the No. of Player, default to be -1 (to be drawed)

	A_Card(std::string pattern, int num,int series_num): pattern(pattern), num(num), series_num(series_num)
    {


    };
	~A_Card()
    {
    };

    void print_this_card()
    {
        std::cout <<this->num <<" "<<this->pattern<<" "<< std::endl;
    };


};