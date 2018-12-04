//project 1-Eliezer Brown
#include <iostream>
using namespace std;

void newDir (int mapsize, int x, int y);

int main()
{
  int mapsize, x, y;

    do {
 cout <<"Enter a map size between 5 and 9 inclusive: ";
  cin >> mapsize;
  if(mapsize < 5 || mapsize > 9) {
  cout << "Invalid map size" << endl;
}

    } while(mapsize < 5 || mapsize > 9);
  do {
      cout << "Initial location of the treasure (row column): ";
      cin >> x >> y;
  if(x < 1 || y < 1 || x > mapsize || y > mapsize) {
cout << "Number must be between 1 and " << mapsize << "." << endl;
}
} while(x < 1 || y < 1 || x > mapsize || y > mapsize);
    newDir (mapsize, x, y);
  int pick=0;
  do {
bool validSelection = false;

    cout << "\n1) Update treasure coordinationates (row column)\n";
    cout << "2) Shift treasure (n e s w)\n";
    cout << "3) Exit Program\n";
    cout << "\nSelect: ";
    cin >> pick;

 switch (pick) {
 case 1:
  do {
  cout << "Update location of treasure (row column): ";
  cin >> x >> y;
  cout << endl;

  if(x < 1 || y < 1 || x > mapsize || y > mapsize) {
  cout << "Coordinates must be between 1 and " << mapsize << "." << endl;
  }
  } while(x < 1 || y < 1 || x > mapsize || y > mapsize);
cout << endl;
cout << "Treasure coordinates reset to row " << x << " and column " << y << ".\n";

newDir (mapsize, x, y);
break;
case 2:
int newx, newy;
char direction;
int points = 0;
  do {
    newx = x;
    newy = y;

    cout << "\nShift treasure (n e s w) and number: ";
            cin >> direction >> points;
  cout << endl;
switch (direction) {
 case 'n':
  newx -= points;
  break;
  case 'e':
  newy += points;
  break;
  case 's':
  newx += points;
  break;
  case 'w':
  newy -= points;
  break;
  default:
  newx = 0;
  cout << "Invalid direction, try again!";
    }
  if(newx < 1 || newy < 1 || newx > mapsize || newy > mapsize) {
  cout << "\nTreasure can't be off the map." << endl;
  }

} while(newx < 1 || newy < 1 || newx > mapsize || newy > mapsize);

    cout << endl;

    x = newx;
    y = newy;

      cout << "The treasure is now on : row " << x << " and column " << y << ".\n";
  newDir (mapsize, x, y);
break;
}

} while (pick != 3);

  cout << "Ending Program. ";
  return 0;

}

void newDir (int mapsize, int x, int y) {

  for(int row = 0; row <= mapsize; row++)
  {

  for(int col = 0; col <= mapsize; col++)
    {
  if(col == 0 && row < mapsize)
      {
    cout << (row + 1) <<" ";
      }

    else if (col != 0 && row < mapsize) {

    if (((row + 1) == x) && (col == y))
      cout << "X ";
    else
      cout << "- ";

    }
  else if (col == 0)
      cout << "  ";
    else
      cout << col << " ";
      }
  cout << endl;
  }
}
