// #include "A_Set_of_Cards.cpp"

class A_Player
{
private:

public:
	A_Set_of_Cards cards_in_hands;
	A_Set_of_Cards cards_dropped;
	A_Set_of_Cards card_just_drawed;
	A_Set_of_Cards special_cards;

	A_Player()
	{

	};
	~A_Player()
	{

	};

	void get_a_card(A_Card card)
	{
		this->cards_in_hands.add_a_card(card);
	};
	
};