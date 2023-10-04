#include <iostream>

int main () {

  std::string questions[] = 
  { "1. In what year did world war 1 start?",
    "2. What German party did Adolf Hitler belong?",
    "3. What is another name the string theory is called?",
    "4. What do we use 'malloc' for in C or C++?"
  };

  std::string options[][4] =
  {
    { "A. 1945", "B. 1919", "C. 1914", "D. 1938"},
    {"A. People's Democratic Party?", "B. German National Syndicate", "C. National Utopia Party", "D. The Nazi Party of Germany"},
    {"A. Elastic Theory", "B. Relativity Theory", "C. The Unification Theory", "D. Theory of Everything"},
    {"A. Memory Allocation on the Heap", "B. Memory Allocation on the Stack", "C. Reallocation of memory", "D. Managing Stack-Overflow Errors"}
  };

  char answerKey[] = { 'C', 'D', 'C', 'A' };

  int size = sizeof(questions)/sizeof(questions[0]);

  char guess;
  int score;

  for(int i = 0; i < size; i++){
    std::cout << "*******************************************************\n";
    std::cout << questions[i] << '\n' ;
    std::cout << "*******************************************************\n";
    for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
      std::cout << options[i][j] << '\n';
    }

    std::cout << "YOUR ANSWER: ";
    std:: cin >> guess;

    guess = toupper(guess);

    if(guess == answerKey[i]){
      std::cout <<  "CORRECT \n";
      score++;
    }
    else{
      std::cout << "WRONG \n";
      std:: cout << "Answer: " << answerKey[i] << '\n'; 
    };
  }

  std::cout << "*******************************************************\n";
  std::cout << "***                   RESULTS                       ***\n";
  std::cout << "*******************************************************\n";
  std::cout << "CORRECT ANSWERS: " << score << '\n';
  std::cout << "Number of Question: " << size << '\n';
  std::cout << "Score: " << (score/(double)size) * 100 << "%";

  return 0;

}