MakeAccount.o : account.h MakeAccount.h MakeAccount.cpp
	g++ -c MakeAccount.cpp

Deposit.o : account.h Deposit.h Deposit.cpp
	g++ -c Deposit.cpp

Withdrawal.o : account.h Withdrawal.h Withdrawal.cpp
	g++ -c Withdrawal.cpp

Show.o : account.h Show.h Show.cpp
	g++ -c Show.cpp

main.o : main.cpp
	g++ -c main.cpp

main : MakeAccount.o Deposit.o Withdrawal.o Show.o main.o
	g++ MakeAccount.o Deposit.o Withdrawal.o Show.o main.o -o main