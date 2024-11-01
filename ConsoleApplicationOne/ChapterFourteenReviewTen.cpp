#include <stdio.h>
struct gas {
	float distance;
	float gals;
	float mpg;
};
struct gas mpgsOne(struct gas trip);
void setMpg(struct gas* ptrip);
int main()
{
	struct gas idaho = {430, 14.0};
	idaho = mpgsOne(idaho);
	printf("%.2f %.2f %.2f\n",idaho.distance, idaho.gals, idaho.mpg);
	struct gas odaho = { 538, 17.6 };
	setMpg(&odaho);
	printf("%.2f %.2f %.2f\n", odaho.distance, odaho.gals, odaho.mpg);
	return 0;
}
struct gas mpgsOne(struct gas trip)
{
	if (trip.gals > 0)
		trip.mpg = trip.distance / trip.gals;
	else
		trip.mpg = -1;
	return trip;
}
void setMpg(struct gas * ptrip)
{
	if (ptrip->gals > 0)
		ptrip->mpg = ptrip->distance / ptrip->gals;
	else
		ptrip->mpg = -1;
}