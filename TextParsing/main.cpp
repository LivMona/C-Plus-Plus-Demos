// Program to parse a txt file and take the information supplied to show the distance between the locations.

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	// Open txt file and creat variable for getline to use
	ifstream txtFile("data.txt");
	string line;

	// Declare variables for parsing
	string startDest, endDest, actualDist, birdDist;
	int testDist;

	// Look at each line of the txt file until there is no more lines
	while (getline(txtFile, line))
	{
		// Stores one line in targetLine
		stringstream targetLine(line);

		// Using ' ' as the delimiter, seperate targetLine into respected variables
		getline(targetLine, startDest, ' ');
		getline(targetLine, endDest, ' ');
		getline(targetLine, actualDist, ' ');
		getline(targetLine, birdDist, ' ');

		// Convert string to int
		testDist = stoi(actualDist);

		// Check to see if actualDist (Converted to testDist) is not equal to -1
			// -1 indicates that travel from startDest and endDest is not possible
		if (testDist == -1)
		{
			cout << "Cannot drive from " << startDest << " to " << endDest << " however there is a straight line difference of " << birdDist << "km." << endl;
		}
		else 
		{
			cout << "Travel from " << startDest << " to " << endDest << " with a straight line of " << birdDist << "km and an actual distance of " << actualDist << "km." << endl;
		}
	}

	return 0;
}