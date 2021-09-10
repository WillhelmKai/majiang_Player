#include <iostream> 
# include <string>
// using namespace std;

class A_Card
{
private:

public:
    std::string pattern;

    int num, series_num; // the No. of Player, default to be -1 (to be drawed)

	A_Card(const std::string pattern,const int num,const int series_num): pattern(pattern), num(num), series_num(series_num)
    {


    };
	~A_Card()
    {
    };

    void print_this_card()
    {
        std::cout <<this->num <<" "<<this->pattern<<" "<< std::endl;
    };

    // for sorting function
    bool operator < (const A_Card& str) const
    {
        return (this->num < str.num);
    }

    bool operator > (const A_Card& str) const
    {
        return (this->num > str.num);
    }

};