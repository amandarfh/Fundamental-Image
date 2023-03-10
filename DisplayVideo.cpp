//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace cv;
//using namespace std;
//
//int main(int argc, char* argv[])
//{	//access video file
//	VideoCapture cap("C:/Users/Arafah/Downloads/giphy.mp4");
//
//	//check, if false exit program
//	if (cap.isOpened() == false)
//	{
//		cout << "cannot open the video file" << endl;
//		cin.get();
//		return -1;
//	}
//
//	//cap.set(CAP_PROP_POS_MSEC, 300); 
//	//get the frames rate of the video
//	double fps = cap.get(CAP_PROP_FPS);
//	cout << "Frames per second: " << fps << endl;
//	
//	//name window
//	String window_name = "Sabilah";
//
//	//create window
//	namedWindow(window_name, WINDOW_NORMAL);
//
//	while (true)
//	{	//Breaking the while loop at the end of the video
//		Mat frame;
//		bool bSuccess = cap.read(frame);
//
//		if (bSuccess==false)
//		{
//			cout << "found the end of the video" << endl;
//			break;
//		}
//		//show frame
//		imshow(window_name, frame);
//
//		//wait for for 60 ms until any key is pressed.  
//		//If the 'Esc' key is pressed, break the while loop.
//		if (waitKey(60) == 27)
//		{
//			cout << "Esc key is pressed by user. Stopping the video" << endl;
//			break;
//		}
//	}
//	return 0;
//}