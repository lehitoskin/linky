class DList
{
public:
void add(int value);
DList()
{
head = NULL;
}
~DList()
{
}

private:


protected:
struct Node
{
	int value;
	Node *next;
	Node *prev;
	Node(int val1, Node *next1 = NULL, Node *prev1 = NULL)
		: value(val1), next(next1), prev(prev1)
	{
	}
};
Node* head;
};
