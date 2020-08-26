#pragma once

#include <base/ovlibrary/ovlibrary.h>
#include <cstdint>

class H265Sps
{
    struct ASPECT_RATIO
    {
        uint16_t _width;
        uint16_t _height;
    };

public:
    static bool Parse(const uint8_t *sps_bitstream, size_t length, H265Sps &sps);

    unsigned int GetWidth() const;
    unsigned int GetHeight() const;
    uint8_t GetProfile() const;
    uint8_t GetCodecLevel() const;
    unsigned int GetFps() const;
    unsigned int GetId() const;
    unsigned int GetMaxNrOfReferenceFrames() const;

    ov::String GetInfoString();

private:
    uint8_t _profile = 0;
    uint8_t _codec_level = 0;
    unsigned int _width = 0;
    unsigned int _height = 0;
    unsigned int _fps = 0;
    unsigned int _id = 0;
    unsigned int _max_nr_of_reference_frames = 0;
    ASPECT_RATIO _aspect_ratio = { 0, 0 };
};