#include "human.h"
#include <string>
#include <vector>

using namespace std;

class student : public human
{
private:
	vector<int> scores;
public:
	student(string last_name, string name, string second_name, vector<int> scores) : human(last_name, name, second_name)
	{
		this->scores = scores;
	}

	float get_average_score()
	{
		unsigned int count_scores = this->scores.size();
		unsigned int sum_scores = 0;

		for (unsigned int i = 0; i < count_scores; i++)
		{
			sum_scores += this->scores[i];
		}
		return (float)sum_scores / (float)count_scores;
	}
};