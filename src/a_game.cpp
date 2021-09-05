#include "a_player.cpp"
#include "a_set_of_majiang.cpp"


class a_game
{
private:
	a_Set_of_Majiang cards = a_Set_of_Majiang();

public:
	a_game() 
	{
		this->cards.wash();
		std::vector<Majiang_Card>  player_cards = this->cards.init_cards_for_a_player();
		for(int i = 0; i < player_cards.size(); i++)
			{
				player_cards[i].print_this_card();
			};

	};

	~a_game()
	{

	};
	
};