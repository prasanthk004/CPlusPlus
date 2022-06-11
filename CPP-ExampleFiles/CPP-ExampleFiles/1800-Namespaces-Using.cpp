#include <iostream>


namespace Collectiva
{
	class cout
	{
		public:
			void Hello()
			{
				std::cout << "Hello World!";
			}
	};

	
}

using namespace Collectiva;

int main()
{	
	cout o;
	o.Hello();
}

