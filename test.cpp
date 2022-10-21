#include<iostream>
using namespace std;
void Trai_Phai(int RoomsInBinhFloor, int Binh_Room, int& RoomLeft, int& RoomRight);
void Tren_Duoi(int Binh_Room, int Binh_Floor, int TotalFloor, int& RoomUp, int& RoomDown);
int main()
{
	int TotalFloor, Binh_Floor, Binh_Room;
	cin >> TotalFloor >> Binh_Floor >> Binh_Room;
	int Room_Up, Room_Down;
	int Room_Left, Room_Right;
	int RoomsInBinhFloor = 3 + (TotalFloor - Binh_Floor);
	Trai_Phai(RoomsInBinhFloor, Binh_Room, Room_Left, Room_Right);
	Tren_Duoi(Binh_Room, Binh_Floor, TotalFloor, Room_Up, Room_Down);
	if (Room_Up != -1)
		cout << Binh_Floor + 1 << " " << Room_Up << endl;
	else
		cout << -1 << endl;
	if (Room_Right != -1)
		cout << Binh_Floor << " " << Room_Right << endl;
	else
		cout << -1 << endl;
	if (Room_Down != -1)
		cout << Binh_Floor - 1 << " " << Room_Down << endl;
	else
		cout << -1 << endl;
	if (Room_Left != -1)
		cout << Binh_Floor << " " << Room_Left << endl;
	else
		cout << -1 << endl;
}
void Trai_Phai(int RoomsInBinhFloor, int Binh_Room, int& RoomLeft, int& RoomRight)
{
	if (Binh_Room - 2 > 0)
		RoomRight = Binh_Room - 2;
	else
		RoomRight = -1;
	if (Binh_Room + 2 < RoomsInBinhFloor * 2)
		RoomLeft = Binh_Room + 2;
	else
		RoomLeft = -1;
}
void Tren_Duoi( int Binh_Room, int Binh_Floor, int TotalFloor, int& RoomUp, int& RoomDown)
{
	if (Binh_Floor + 1 <= TotalFloor)
		if (Binh_Room - 2 > 0)
			RoomUp = Binh_Room - 2;
		else
			RoomUp = -1;
	else
		RoomUp = -1;
	if (Binh_Floor - 1 > 0)
		RoomDown = Binh_Room + 2;
	else
		RoomDown = -1;
}