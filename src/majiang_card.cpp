#include <iostream> 

using namespace std;

class majiang_card
{
public:
    char *hua_se, *shu_zi;
    const char *status;
    //status: to-be-drawed, on-hand, show for public
    int belong_to; // the No. of Player, default to be -1

	majiang_card(char *hua_se, char *shu_zi)
    {
        this->hua_se = hua_se;
        this->shu_zi = shu_zi;
        this->status ="to_be_drawed";
        this->belong_to = -1;

    };
	~majiang_card();
	
};