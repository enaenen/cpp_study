#include <iostream>

class Brain {
   private:
	std::string ideas[10];

   public:
	void setIdeas( unsigned int idx, const std::string content ) {
		ideas[idx] = content;
	}
	std::string getIdeas( unsigned int idx ) const { return ideas[idx]; }
};
int main( void ) {
	std::string test = "ABCD";
	std::string nothing;

	Brain *b = new Brain();

	b->setIdeas( 0, "ABCD" );
	std::cout << b->getIdeas( 0 ) << std::endl;
	std::cout << b->getIdeas( 1 ).empty() << std::endl;

	delete b;
}