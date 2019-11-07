ma.dat : ma.cpp ad.cpp
	c++ ma.cpp -o ma.x
	c++ ad.cpp -o ad.x
	./ma.x
	./ad.x
	rm ma.x ad.x