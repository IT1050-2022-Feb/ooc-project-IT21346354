class Book search{
	private:
		int book ID;
		
	public:
	    book search(int bookID *bID, customer*cus, order*ord );
        book search(int bookID1, int bookID2 );
        void Bookname();
        void Bookprice();
        void Availble books();
        ~Book search();
	
};
Booksearch::Booksearch(int bookID*bID, customer*cus,order*ord)
{
 bookID = bID;
 customer = cus;
 order = ord;
 

}
book search::book search(int bookID1, int bookID2)
{
 book[0]= new book( bookID1);
 book[1]= new book( bookID2);
}
void Booksearch::Bookname()
{}
void Booksearch::Bookprice()
{}
void Booksearch::Availablebook()
{}

Booksearch::~Booksearch()


