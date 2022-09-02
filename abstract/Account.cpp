class Account {
   public:
	Account( double d );
	virtual double getBalance();
	virtual void PrintBalance() = 0;

   private:
	double balance;
};