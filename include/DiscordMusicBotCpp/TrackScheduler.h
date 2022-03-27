#ifndef TrackScheduler_H
#define TrackScheduler_H

#include "Track.h"
#include <string>
#include <vector>

class TrackScheduler
{
    public:
        TrackScheduler();

        void insert(std::string url, int64_t index);
        void remove(int64_t index);
        Track get(int64_t index);
        std::vector<Track> getAll();
        int64_t size();
        int64_t getCurrentNumber();
        void setCurrentNumber(int64_t index);

    private:
        std::vector<Track> tracks_;
        int64_t currentNumber_;
};

#endif
