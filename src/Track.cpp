#include "Track.h"
#include <string>

Track::Track(std::string url)
{
    url_ = url;
    name_ = "budet name";
    author_ = "budet author";
    length_ = 228228;
    previewPath_ = "budet previewPath";
}

Track::~Track()
{

}

std::string Track::getUrl()
{
    return url_;
}

std::string Track::getName()
{
    return name_;
}

std::string Track::getAuthor()
{
    return author_;
}

int64_t Track::getLength()
{
    return length_;
}

std::string Track::getPreviewPath()
{
    return previewPath_;
}
