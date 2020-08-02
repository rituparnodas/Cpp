// Section 7
// Vectors

#include <iostream>
#include <vector>   // don't forget this in order to use vectors

using namespace std;

void VectorTasks();

int main() 
{
    
//    vector <char> vowels;         // empty 
//    vector <char> vowels (5);      // 5 initialized to zero 
    vector <char> vowels {'a' , 'e', 'i', 'o', 'u'};
    
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    
//    vector <int> test_scores (3);  // 3 elements all initialized to zero
//   vector <int> test_scores (3, 100); // 3 elements all initialized to 100
    
      vector <int> test_scores {100, 98, 89};
    
    cout << "\nTest scores using array syntax:" << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "\nTest scores using vector syntax:" << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;
    
    cout << "\nEnter 3 test scores: ";
    cin  >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
    
    cout << "\nUpdated test scores: " << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    

    cout << "\nEnter a test score to add to the vector: ";
    
    int score_to_add {0};
    cin >> score_to_add;
    
    test_scores.push_back(score_to_add);
    
    cout << "\nEnter one more test score to add to the vector: ";
    
    cin >> score_to_add;
    
    test_scores.push_back(score_to_add);
    
     cout << "\nTest scores are now: " << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    
    cout << "\nThere are now " << test_scores.size() << " scores in the vector" << endl;
    
  //  cout << "This should cause an exception!!" << test_scores.at(10) << endl;

    // Example of a 2D-vector
    
    vector <vector<int>> movie_ratings 
    {   
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };

    cout << "\nHere are the movie rating for reviewer #1 using array syntax :" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;
    
     cout << "\nHere are the movie rating for reviewer #1 using vector syntax :" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
    
    cout << endl;

    VectorTasks();
    return 0;
}

void VectorTasks()
{
  vector <int> Vector1;
	vector <int> Vector2;
	
	Vector1.push_back(10);
	Vector1.push_back(20);
	
	Vector2.push_back(100);
	Vector2.push_back(200);
	
	vector<vector<int>> Vector_2d;
	
	Vector_2d.push_back(Vector1);
	Vector_2d.push_back(Vector2);
	
	cout << Vector1.at(0) << "\n";
	cout << Vector1.at(1) << "\n";
	cout << "Total : " << Vector1.size();
	cout << "\n======================\n";
	cout << Vector2[0] << "\n";
	cout << Vector2[1] << "\n";
	cout << "Total : " << Vector2.size();
	cout << "\n======================\n";
	cout << Vector_2d.at(0).at(0) << " " << Vector_2d.at(0).at(1) << "\n";
	cout << Vector_2d.at(1).at(0) << " " << Vector_2d.at(1).at(1) << "\n";
	cout << "\n======================\n";
	Vector_2d.at(0).at(0) = 1000; // if Use Vector1.at(0) = 1000; Then Nothing Will Happen
	cout << Vector_2d.at(0).at(0) << " " << Vector_2d.at(0).at(1) << "\n";
	cout << Vector_2d.at(1).at(0) << " " << Vector_2d.at(1).at(1) << "\n";
}