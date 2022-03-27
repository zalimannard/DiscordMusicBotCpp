#include "TrackScheduler.h"
#include <string>
#include <vector>

TrackScheduler::TrackScheduler()
{
    currentNumber_ = 1;
}

void TrackScheduler::insert(std::string url, int64_t index)
{
    Track track(url);
    tracks_.insert(tracks_.begin() + index - 1, track);
}

void TrackScheduler::remove(int64_t index)
{
    if (index <= currentNumber_)
    {
        --currentNumber_;
    }
    tracks_.erase(tracks_.begin() + index - 1);
}

Track TrackScheduler::get(int64_t index)
{
    return tracks_[index];
}

std::vector<Track> TrackScheduler::getAll()
{
    return tracks_;
}

int64_t TrackScheduler::size()
{
    return tracks_.size();
}

int64_t TrackScheduler::getCurrentNumber()
{
    return currentNumber_;
}

void TrackScheduler::setCurrentNumber(int64_t index)
{
    currentNumber_ = index;
}
