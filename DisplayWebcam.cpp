//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace cv;
//using namespace std;
//
//int main(int argc, char* argv[])
//{	//Open the default video camera
//	VideoCapture cap(0);
//	//check, if false exit program
//	if (cap.isOpened() == false)
//	{
//		cout << "Cannot open the video camera" << endl;
//		cin.get();
//		return -1;
//	}
//
//	double dWidth = cap.get(CAP_PROP_FRAME_WIDTH);//get width of frame video
//	double dHeight = cap.get(CAP_PROP_FRAME_HEIGHT);//get height of frame video
//
//	cout << "Resolution :" << dWidth << "x" << dHeight << endl;
//
//	String window_name = "kamerakuu";
//	namedWindow(window_name);
//
//	while (true)
//	{
//		Mat frame;
//		bool bSuccess = cap.read(frame);
//		//read a new frame from video 
//	    //Breaking the while loop if the frames cannot be captured
//		if (bSuccess == false)
//
//		if (bSuccess=false)
//		{
//			cout << "Video disconnected" << endl;
//			cin.get();//Wait for any key press
//			break;
//		}
//		//show frame
//		imshow(window_name, frame);
//
//		//wait for for 10 ms until any key is pressed.  
//		//If the 'Esc' key is pressed, break the while loop.
//		if (waitKey(10) == 27)
//		{
//			cout << "Esc pressed. Stopping video" << endl;
//			break;
//		}
//	}
//	return 0;
//}