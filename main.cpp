#include <opencv2/highgui.hpp>
#include <iostream>
#include <ctime>
#include <cmath>


#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/videoio.hpp>

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

#include <opencv2/core/cuda.hpp>
#include <opencv2/cudaarithm.hpp>
#include <opencv2/cudaimgproc.hpp>

#include <opencv2/xfeatures2d/cuda.hpp>
#include <opencv2/cudafeatures2d.hpp>

#include "opencv2/core/cuda.hpp"
#include "opencv2/features2d.hpp"
#include "opencv2/cudafilters.hpp"

#include "opencv2/calib3d/calib3d.hpp"

using namespace std;
using namespace cv;

int main( int argc, char** argv ) {

  cv::Mat image;
  image = cv::imread("test.png" ,cv::IMREAD_COLOR);

  // VideoCapture video("udpsrc port=5000 ! application/x-rtp, media=(string)video, payload=(int)96, clock-rate=(int)90000, encoding-name=(string)H264, ssrc=(uint)3572028551, timestamp-offset=(uint)600628017, seqnum-offset=(uint)516, a-framerate=(string)30 ! rtph264depay ! queue max-size-buffers=0 max-size-bytes=0 max-size-time=1000000000 ! queue max-size-time=1000000 min-threshold-time=1000000 ! decodebin ! queue !  videoconvert ! appsink",CAP_GSTREAMER);
  VideoCapture video("test.mp4");

  Mat colorFrame;

  std::clock_t begin = std::clock();

  while(waitKey(1)!=27)
  {


    video>>colorFrame;

    cout<<std::clock() - begin;

}

  if(! image.data ) {
      std::cout <<  "Image not found or unable to open" << std::endl ;
      return -1;
    }

  cv::namedWindow( "Techawarey:OpenCV Test Program", cv::WINDOW_AUTOSIZE );
  cv::imshow( "Techawarey:OpenCV Test Program", image );

  cv::waitKey(0);
  return 0;
}
