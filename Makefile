Account.o : String.h Account.h BankingCommonDecl.h Account.cpp
	g++ -c Account.cpp

AccountHandler.o : String.h Account.h AccountHandler.h NormalAccount.h HighCreditAccount.h BankingCommonDecl.h AccountHandler.cpp
	g++ -c AccountHandler.cpp

String.o : String.h String.cpp
	g++ -c String.cpp

main.o : BankingCommonDecl.h AccountHandler.h main.cpp
	g++ -c main.cpp

main : Account.o AccountHandler.o String.o main.o
	g++ Account.o AccountHandler.o String.o main.o -o main