#include <memory>
#include <iostream>

class Point2D
{
private:
	int m_x;
	int m_y;
public:
	Point2D(int x, int y)
	{
		m_x = x;
		m_y = y;
	}

	void Draw()
	{
		std::cout << "(" << m_x << "," << m_y << ")" << std::endl;
	}
};

int main()
{

	// –â‚P
	std::unique_ptr<int> p = std::make_unique<int>(10);
	std::cout << *p << std::endl;
	p.reset(new int(20));
	std::cout << *p << std::endl << std::endl;


	// –â‚Q
	std::unique_ptr<Point2D> p1 = std::make_unique<Point2D>(0, 0);
	p1->Draw();
	p1.reset(new Point2D(0, 10));
	p1->Draw();


	// –â‚R
	std::cout << std::endl;
	std::unique_ptr<Point2D>p2 = std::make_unique <Point2D>(0, 0);
	for (int i = 0; i <= 5; i++)
	{
		p2->Draw();
		p2.reset(new Point2D(i + 1, 0));
	}


	return 0;
}