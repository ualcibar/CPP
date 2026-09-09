#include "PmergeMe.hpp"
#include <string>
# include <sys/time.h>

bool validSequence(int size, char **input) {
	if (size == 1)
		return false;
	for (int j = 0; j < size - 1; j++) {
		for (int i = 0; input[j][i]; i++) {
			if (!std::isdigit(input[j][i]))
			 return false;
		}
	}
	return true;
}

time_t	get_time_in_ms(void)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec * 1000) + (tv.tv_usec / 1000));
}

int main(int argc, char **argv)
{
	if (!validSequence(argc, &argv[1])) {
		std::cerr << "Error\n";
		return 1;
	}
	long long	start_vector;
	long long	end_vector;
	long long	star_que;
	long long	end_que;
	std::vector<int>::iterator it;
	std::vector<int> arr;
	std::deque<int>::iterator it1;
	std::deque<int> arr1;
	//argv++;
	int i = 1;
	std::cout << "Before:   ";
	while(i < argc)
	{
		arr.push_back(std::stoi(argv[i]));
		arr1.push_back(std::stoi(argv[i]));
		i++;
	}
	for (it1 = arr1.begin(); it1 != arr1.end(); ++it1) {
       std::cout << *it1 << " ";
   	}
	PmergeMe my;
	start_vector = get_time_in_ms();
	my.mergeShortVecotr(arr.begin(), arr.end());;
	end_vector = get_time_in_ms();
	star_que = get_time_in_ms();
	my.mergeShortDeque(arr1.begin(), arr1.end());
	end_que = get_time_in_ms();	

	std::cout << "\nAfter:  ";
   for (it = my.input.begin(); it != my.input.end(); ++it) {
       std::cout << *it << " ";
	}
   	std::cout << "\n ";
	std::cout << "\nTime to procces a range of " << argc - 1 << " elements with std::vector : " << end_vector - start_vector << "ms" << std::endl; 
	std::cout << "\nTime to procces a range of " << argc - 1 << " elements with std::Deque : " << end_que - star_que << "ms" << std::endl; 
	
}
