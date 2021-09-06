#include "A_Player.cpp"
#include "A_Set_of_Cards.cpp"


class a_game
{
private:
	A_Set_of_Cards cards;

public:
	a_game() 
	{
		this->cards = A_Set_of_Cards();
		this->cards.wash();

		
		// std::vector<A_Card>  player_cards = this->cards.init_cards_for_a_player();
		// for(int i = 0; i < player_cards.size(); i++)
		// 	{
		// 		player_cards[i].print_this_card();
		// 	};

	};

	~a_game()
	{

	};
	
};