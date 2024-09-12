#include <iostream>
#include <cstring>

int main(){

    /*
    //std::strlen => Finds the length of a string
    //real array and those decayed into pointers
    const char string[] {"Hey, you. You can do it!"};
    
    //Array decays into pointer when we use const char*
    const char *string2 {"Hey, you."};

    // Let's see the messages
    std::cout << "First string : " << string << std::endl;
    std::cout << "Second string : " << string2 << std::endl;

    //std::strlen => IGNORES NULL character!!!
    std::cout << "std::strlen(string) => " << std::strlen(string) << std::endl;

    //sizeof => INCLUDES NULL character!
    std::cout << "sizeof(string) => " << sizeof(string) << std::endl;

    //std::strlen still works with decayed arrays
    std::cout << "std::strlen(string2) => " << std::strlen(string2) << std::endl;

    //sizeof => Prints size of pointer!!! Know that it is just a pointer.
    std::cout << "sizeof(string2) => " << sizeof(string2) << std::endl;
    */


    /*
    //std::strcmp => int strcmp ( const char* first, const char* second);
    //Returns negative value if first appears before second in lexicographic order,
    //Zero if first and second compare equal.
    //and Positive value if first appears after second in lexicographic order.
    std::cout << "Being used std::strcmp command : " << std::endl;
    const char *message1 {"Brooklyn"};
    const char *message2 {"Crooklyn"};

    char message3[] {"Brooklyn"};
    char message4[] {"Crooklyn"};

    // Show the words
    std::cout << "First word: " << message1 << std::endl;
    std::cout << "Second word: " << message2 << std::endl;

    // Compare them
    std::cout << "std::strcmp("<< message1 << ","<< message2 <<") : " << std::strcmp(message1, message2) << std::endl;
    std::cout << "std::strcmp("<< message3 << ","<< message4 <<") : " << std::strcmp(message3, message4) << std::endl;


    // Try different example
    message1 = {"Brooklyz"}; // you can change because it is not a const array 
    message2 = {"Brooklyn"};

    //message3[] {"Brooklyn"}; will give you error because you can't change an array
    //message4[] {"Crooklyn"};

    std::cout << "std::strcmp("<< message1 << ","<< message2 <<") : " << std::strcmp(message1, message2) << std::endl;


    // Try another example
    message1 = {"Mark"};
    message2 = {"Joe"};

    std::cout << "std::strcmp("<< message1 << ","<< message2 <<") : " << std::strcmp(message1, message2) << std::endl;
    */


    /*
    //std::strncmp => int strncmp( const char* first, const char* second, std::size_t count );
    //Compares n characters in the strings
    //Output is the same with std::strcmp (zero if first and second compare are equal, or if count is zero.)

    const char *message1 {"Brooklyn"};
    const char *message2 {"Crooklyn"};

    // Print out comparison
    size_t nol{4};  // number of letters to compare
    std::cout << std::endl;
    std::cout << "Being used the command std::strncmp : " << std::endl;
    std::cout << "std::strncmp(" << message1 << "," << message2 << "," << nol << ") : " << std::strncmp(message1, message2,nol) << std::endl;

    // Try different example
    message1 = {"Slovenia"};
    message2 = {"Slovakia"};
    std::cout << "std::strncmp(" << message1 << "," << message2 << "," << nol << ") : " << std::strncmp(message1, message2,nol) << std::endl;
    */

    
    
    //Find the first occurence of a character
    std::cout << std::endl;
    std::cout << "Being used the command => std::strchr : " << std::endl;   // to find all characters one by one
    //you can check : https://en.cppreference.com/w/cpp/string/byte/strchr

    const char *const str{"Ever tried, ever failed. No matter. Try again, fail again but fail better. "};
    //Can make this a const pointer to prevent users from making it point somewhere else
    char aim = 'f';
    const char *result = str;
    size_t iterations {};

    while ((result = std::strchr(result, aim)) != nullptr){     // when he find the target/aim, it deletes before of it and writes the rest.
        std::cout << "Found " << aim << " starting at " << result << std::endl;   // to find all characters one by one

        // Should increment the result, otherwise we will get the same "f"(same location)
        result++;
        iterations++;
    }

    std::cout << "iterations " << iterations << std::endl;
    


    /* Wrong one
    //A lesser version that will loop 25 times
    
	//Find the first occurrence of a character 
	std::cout << std::endl;
	std::cout << "Being used the command => std::strchr : " << std::endl;
	//you can check : https://en.cppreference.com/w/cpp/string/byte/strchr

	//we use std::strchr to find all the characters one by one.

    const char *str{"Ever tried, ever failed. No matter. Try again, fail again but fail better. "};
	char aim = 'f';
	const char *result{nullptr};
	size_t iterations{};


	while ((result = std::strchr(str, aim)) != nullptr) {
		std::cout << "Found '" << aim << "' starting at '" << result << "'\n";

		// Increment result, otherwise we'll find target at the same location
		str++; // Making the pointer point to the next character
		iterations++;
	}
	std::cout << "iterations : " << iterations << std::endl;
    */

    /*
    //Find last occurence
	std::cout << std::endl;
    std::cout << "Being used the command => std::strrchr : " << std::endl;
	//you can check : https://en.cppreference.com/w/cpp/string/byte/strrchr
	
    char input[] = "/home/user/hello.cpp";
    char* output = std::strrchr(input, '/');        // searching starts from the end
    if(output)
        std::cout << output+1 << std::endl; //+1 because we want to start printing past 
                                            // the character found by std::strrchr.
    */

    return 0;
}