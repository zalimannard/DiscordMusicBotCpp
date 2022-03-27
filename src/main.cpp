#include <iostream>
#include "Track.h"
#include "TrackScheduler.h"

int main()
{
    TrackScheduler scheduler;
    scheduler.insert("aoeuaoeu", 1);
    std::cout << scheduler.size() << std::endl;
    return 0;
}
