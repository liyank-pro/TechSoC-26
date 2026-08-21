#include <iostream>

int main() {
    std::cout << " enter max port capacity: ";
    int C;
    std::cin >> C;
    std::cout << " enter number of containers  : ";
    int N;
    std::cin >> N;
    int i = 1;
    int sum = 0;
     int k=0;
     int h=10000000;
    while (i <= N) {
       std::cout << " enter container weight W" << i << ": ";
        int W;
        std::cin >> W;
        i++;
      
        if (W >= k)
        {
            sum += W;
           k=W;
          
        }
        else{
            sum += W;
          k=k;
        }

       
         
        if (W <= h)
        {
           
           h=W;
          
        }
        else{
           
          h=h;
        }
          // i know the min code is not what is desired but i couldnt think of anything else 
          // i am a beginner 
        
        
    }
    int avg = sum / N;
     std::cout << std::endl;

    std::cout << " average weight of containers is: " << avg << std::endl;
    if (sum > C) {
        std::cout << " port capacity exceeded" << std::endl;
    } else {
        std::cout << "shipment can be unloaded" << std::endl;
    }
    std::cout<< "the max weight is" << k <<std::endl;
     std::cout<< "the min weight is" << h <<std::endl;
    return 0;
}