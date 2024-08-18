using namespace std;
class AVL
{
	private:
		struct node
		{
			int data;
			string item;
		    int price;
		    node* left;
		    node* right;
		    int height;
		    int count;
		};
		node* root;
	public:
		AVL();
		node* findMin(node* t);
		node* findMax(node* t);
		node* insert(int x, string y, int z,node* t);
		void insert(int x, string y, int z);
		node* RightRotate(node* &t);
		node* LeftRotate(node* &t);
		node* RightLeftRotate(node* &t);
		node* LeftRightRotate(node* &t);
		int height(node* t);
		string srch(int key);
		int sch(int key);
		int search(int key);
		void count(int key);
        void count1(int key);
        int count2(int key);
		int s=0;//total amount
		void frequency(node *&t);
		void frequency();
		void print(node *&t);
		void print();
		void deletetree();
		void deletetree(node*& t);
		void update(int key, string new_item,int new_price);
		void delete1(int & x);
		void balance(node *&t);
		void delete_element(int &x,node*&t);
};

