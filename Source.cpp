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

	void SetX(int x)
	{
		m_x = x;
	}

	void SetY(int y)
	{
		m_y = y;
	}

	int GetX()
	{
		return m_x;
	}
};

int main()
{

	// –â‚P
	std::unique_ptr<int> p = std::make_unique<int>(10);
	std::cout << *p << std::endl;
	*p = 20;
	std::cout << *p << std::endl << std::endl;


	// –â‚Q
	std::unique_ptr<Point2D> p1 = std::make_unique<Point2D>(0, 0);
	p1->Draw();
	p1->SetY(10);
	p1->Draw();


	// –â‚R
	std::cout << std::endl;
	std::unique_ptr<Point2D>p2 = std::make_unique <Point2D>(0, 0);
	for (int i = 0; i <= 5; i++)
	{
		p2->Draw();
		int x = p2->GetX();
		p2->SetX(x + 1);
	}


	return 0;
}