Account.o : Account.h BankingCommonDecl.h Account.cpp
	g++ -c Account.cpp

AccountHandler.o : Account.h AccountHandler.h NormalAccount.h HighCreditAccount.h BankingCommonDecl.h AccountHandler.cpp
	g++ -c AccountHandler.cpp

main.o : BankingCommonDecl.h AccountHandler.h main.cpp
	g++ -c main.cpp

main : Account.o AccountHandler.o main.o
	g++ Account.o AccountHandler.o main.o -o main