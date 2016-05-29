//EnglishStudent.cpp

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class EnglishStudent{
	public:
		int midterm;
		int finalExamGrade;
		int research;
		int presentation;
		float finalNumericGrade;
		char finalLetterGrade;
		float ENGLISH_FINALEXAM_PERCENTAGE;
		float ENGLISH_RESEARCH_PERCENTAGE;
		float ENGLISH_PRESENTATION_PERCENTAGE;
		float ENGLISH_MIDTERM_PERCENTAGE;
	public: EnglishStudent(){
		cout << "English Student's Constractor" <<endl;
		midterm = 0;
		finalExamGrade = 0;
		research = 0;
		presentation = 0;
		finalNumericGrade = 0;
		ENGLISH_FINALEXAM_PERCENTAGE = .25;
		ENGLISH_RESEARCH_PERCENTAGE = .30;
		ENGLISH_PRESENTATION_PERCENTAGE = .20;
		ENGLISH_MIDTERM_PERCENTAGE = .25;
		}
	public: void Calculate(){
		char response[256];
		string moreGradesToCalculate;
		
		cout << "Enter the midterm Grade: ";
		cin.getline(response, 256);
		midterm = atoi(response);
		
		cout << "Enter the final examination grade: ";
		cin.getline(response, 256);
		finalExamGrade = atoi(response);

		cout << "Enter the research grade: ";
		cin.getline(response, 256);
		research = atoi(response);

		cout << "Enter the presentation grade";
		cin.getline(response, 256);
		presentation = atoi(response);

		finalNumericGrade = (midterm * ENGLISH_MIDTERM_PERCENTAGE + 
			finalExamGrade * ENGLISH_FINALEXAM_PERCENTAGE + 
			research * ENGLISH_RESEARCH_PERCENTAGE +
			presentation * ENGLISH_PRESENTATION_PERCENTAGE);

		if (finalNumericGrade >= 93)
			finalLetterGrade = 'A';
		else
			if (finalNumericGrade >= 85 && finalNumericGrade < 93)
				finalLetterGrade = 'B';
		else
			if (finalNumericGrade >= 78 && finalNumericGrade < 85)
				finalLetterGrade = 'C';
		else 
			if (finalNumericGrade >= 70 && finalNumericGrade <78)
				finalLetterGrade = 'D';
		else 
			if (finalNumericGrade < 70) finalLetterGrade = 'F';

	}
};