#include "task1.h"

double calcDelta()//расчет зазора между землей и веревкой
{
	Circle earth(6378.1);
	Circle rope(earth.getRadius() + 1);
	return rope.getArea() - earth.getArea();
};
double calcCost() // расчет стоимости бассейна
{
	Circle pool(3);
	Circle road(pool.getRadius() + 1);
	return (pool.getArea() - road.getArea()) * 1000 * 1 +  road.getFerence() * 2000;
};