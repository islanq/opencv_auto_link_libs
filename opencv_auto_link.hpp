#ifndef _AUTO_LINK_LIBS_HPP_
#define _AUTO_LINK_LIBS_HPP_

	#define AUTO_LINK_STATIC_LIBS

	#if defined(AUTO_LINK_STATIC_LIBS)
	  	#if (_WIN64)
	    	#if defined(_DEBUG)
		      	#if !defined(OPENCV_ALL_HPP)
		        	#include "opencv2/opencv.hpp"
		        	#pragma comment(lib, "opencv_world320d.lib")
		      	#endif

		      	#if defined(__OPENCV_ARUCO_HPP__)
		        	#pragma comment(lib, "opencv_aruco320d.lib")
		      	#endif

		      	#if defined(__OPENCV_BGSEGM_HPP__)
		       	 	#pragma comment(lib, "opencv_bgsegm320d.lib")
		      	#endif

		      	#if defined(__OPENCV_BIOINSPIRED_HPP__)
		        	#pragma comment(lib, "opencv_bioinspired320d.lib")
		      	#endif

		      	#if defined(OPENCV_CALIB3D_HPP)
		        	#pragma comment (lib, "opencv_calib3d320.lib")
		      	#endif

		      	#if defined(__OPENCV_CCALIB_HPP__)
		        	#pragma comment (lib, "opencv_calib320.lib")
		      	#endif

		      	#if defined(OPENCV_CORE_HPP)
		        	#pragma comment(lib, "opencv_core320d.lib")
		      	#endif

		      	#if defined(OPENCV_CUDAARITHM_HPP)
		        	#pragma comment(lib, "opencv_cudaarithm320d.lib")
		      	#endif

		      	#if defined(OPENCV_CUDABGSEGM_HPP)
		        	#pragma comment(lib, "opencv_cudabgsegm320d.lib")
		      	#endif

		      	#if defined(OPENCV_CUDACODEC_HPP)
		        	#pragma comment(lib, "opencv_cudacodec320d.lib")
		      	#endif

		      	#if defined(OPENCV_CUDAFEATURES2D_HPP)
		        	#pragma comment(lib, "opencv_cudafeatures2d320d.lib")
		      	#endif

		      	#if defined(OPENCV_CUDAFILTERS_HPP)
		        	#pragma comment(lib, "opencv_cudafilters320d.lib")
		      	#endif

		      	#if defined( OPENCV_CUDAIMGPROC_HPP)
		        	#pragma comment(lib, "opencv_cudaimgproc320d.lib")
		      	#endif

		      	#if defined(OPENCV_CUDALEGACY_HPP)
		        	#pragma comment(lib, "opencv_cudalegacy320d.lib")
		      	#endif

		      	#if defined(OPENCV_CUDAOBJDETECT_HPP)
		        	#pragma comment(lib, "opencv_cudaobjdetect320d.lib")
		      	#endif

		      	#if defined(OPENCV_CUDAOPTFLOW_HPP)
		        	#pragma comment(lib, "opencv_cudaoptflow320d.lib")
		      	#endif

		      	#if defined(OPENCV_CUDASTEREO_HPP)
		        	#pragma comment(lib, "opencv_cudastereo320d.lib")
		      	#endif

		      	#if defined(OPENCV_CUDAWARPING_HPP)
		        	#pragma comment(lib, "opencv_cudawarping320d.lib" )
		      	#endif

		      	#if defined(OPENCV_CUDEV_HPP)
		        	#pragma comment(lib, "opencv_cudev320d.lib")
		      	#endif

		      	#if defined(OPENCV_DNN_HPP)
		        	#pragma comment(lib, "opencv_dnn320d.lib")
		      	#endif

		      	#if defined(__OPENCV_LATENTSVM_HPP__)
		        	#pragma comment(lib, "opencv_dpm320d.lib")
		      	#endif

		      	#if defined(__OPENCV_FACE_HPP__)
		        	#pragma comment(lib, "opencv_face320d.lib")
		      	#endif

		      	#if defined(OPENCV_FEATURES_2D_HPP)
		        	#pragma comment(lib, "opencv_features2d320d.lib")
		      	#endif

		     	#if defined(OPENCV_FLANN_HPP)
		        	#pragma comment(lib, "opencv_flann320d.lib")
		      	#endif

		      	#if defined(__OPENCV_FUZZY_H__)
		        	#pragma comment(lib,  "opencv_fuzzy320d.lib")
		      	#endif

		      	#if defined(OPENCV_HIGHGUI_HPP)
		        	#pragma comment(lib, "opencv_highgui320d.lib")
		      	#endif

		      	#if defined(OPENCV_IMG_HASH_H)
		        	#pragma comment(lib, "opencv_img_hash320d.lib")
		      	#endif

		      	#if defined(OPENCV_IMGCODECS_HPP)
		        	#pragma comment(lib, "opencv_imgcodecs320d.lib")
		      	#endif

		      	#if defined(OPENCV_IMGPROC_HPP)
		        	#pragma comment(lib, "opencv_imgproc320d.lib")
		      	#endif

		      	#if defined(__OPENCV_LINE_DESCRIPTOR_HPP__)
		        	#pragma comment(lib, "opencv_line_descriptor320d.lib")
		      	#endif

		      	#if defined(OPENCV_ML_HPP)
		        	#pragma comment(lib, "opencv_ml320d.lib" )
		      	#endif

		      	#if defined(OPENCV_OBJDETECT_HPP)
		        	#pragma comment(lib, "opencv_objdetect320d.lib")
		      	#endif

		      	#if defined(__OPENCV_OPTFLOW_HPP__)
		        	#pragma comment(lib, "opencv_optflow320d.lib" )
		      	#endif

		      	#if defined(OPENCV_PHOTO_HPP)
		        	#pragma comment(lib, "opencv_photo320d.lib")
		      	#endif

		      	#if defined(_OPENCV_PLOT_H_)
		        	#pragma comment(lib, "opencv_plot320d.lib")
		      	#endif

		      	#if defined(__OPENCV_RGBD_HPP__)
		        	#pragma comment(lib, "opencv_rgbd320d.lib" )
		      	#endif

		      	#if defined(__OPENCV_SALIENCY_HPP__)
		        	#pragma comment(lib, "opencv_saliency320d.lib")
		      	#endif

		      	#if defined(OPENCV_SHAPE_HPP)
		        	#pragma comment(lib, "opencv_shape320d.lib")
		      	#endif

		      	#if defined(__OPENCV_STEREO_HPP__)
		        	#pragma comment(lib, "opencv_stereo320d.lib")
		      	#endif

		      	#if defined(OPENCV_STITCHING_STITCHER_HPP)
		        	#pragma comment(lib, "opencv_stitching320d.lib")
		      	#endif

		      	#if defined(__OPENCV_STRUCTURED_LIGHT_HPP__)
		        	#pragma comment(lib, "opencv_structured_light320d.lib")
		      	#endif

		      	#if defined(OPENCV_SUPERRES_HPP)
		        	#pragma comment(lib, "opencv_superres320d.lib")
		      	#endif

		      	#if defined(__OPENCV_SURFACE_MATCHING_HPP__)
		        	#pragma comment(lib, "opencv_surface_matching320d.lib")
		      	#endif

		      	#if defined(__OPENCV_TEXT_HPP__)
		        	#pragma comment(lib, "opencv_text320d.lib" )
		      	#endif

		      	#if defined(__OPENCV_TRACKING_LENLEN_HPP__)
		        	#pragma comment(lib, "opencv_tracking320d.lib" )
		      	#endif

		      	#if defined(OPENCV_VIDEO_HPP)
		        	#pragma comment(lib, "opencv_video320d.lib")
		      	#endif

		      	#if defined(OPENCV_VIDEOIO_HPP)
		        	#pragma comment(lib, "opencv_videoio320d.lib" )
		      	#endif

		      	#if defined(OPENCV_VIDEOSTAB_HPP)
		        	#pragma comment(lib, "opencv_videostab320d.lib")
		      	#endif

		      	#if defined(__OPENCV_XFEATURES2D_HPP__) || defined(__OPENCV_XFEATURES2D_FEATURES_2D_HPP__)
		        	#pragma comment(lib, "opencv_xfeatures2d320d.lib")
		      	#endif

		      	#if defined(__OPENCV_XIMGPROC_HPP__)
		        	#pragma comment(lib, "opencv_ximgproc320d.lib")
		      	#endif

		      	#if defined(__OPENCV_XOBJDETECT_XOBJDETECT_HPP__)
		        	#pragma comment(lib, "opencv_xobjdetect320d.lib")
		      	#endif

		      	#if defined(__OPENCV_XPHOTO_HPP__)
		        	#pragma comment(lib, "opencv_xphoto320d.lib")
		      	#endif
	    	#else
		      	#if !defined(OPENCV_ALL_HPP)
		        	#include "opencv2/opencv.hpp"
		        	#pragma comment(lib, "opencv_world320.lib")
		      	#endif

		      	#if defined(__OPENCV_ARUCO_HPP__)
		        	#pragma comment(lib, "opencv_aruco320.lib")
		      	#endif

		      	#if defined(__OPENCV_BGSEGM_HPP__)
		        	#pragma comment(lib, "opencv_bgsegm320.lib")
		      	#endif

		      	#if defined(__OPENCV_BIOINSPIRED_HPP__)
		        	#pragma comment(lib, "opencv_bioinspired320.lib")
		      	#endif

		      	#if defined(OPENCV_CALIB3D_HPP)
		        	#pragma comment (lib, "opencv_calib3d320.lib")
		      	#endif

		      	#if defined (__OPENCV_CCALIB_HPP__)
		        	#pragma comment (lib, "opencv_calib320.lib")
		      	#endif

		      	#if defined(OPENCV_CORE_HPP)
		        	#pragma comment(lib, "opencv_core320.lib")
		      	#endif

		      	#if defined(OPENCV_CUDAARITHM_HPP)
		        	#pragma comment(lib, "opencv_cudaarithm320.lib")
		      	#endif

		      	#if defined(OPENCV_CUDABGSEGM_HPP)
		        	#pragma comment(lib, "opencv_cudabgsegm320.lib")
		      	#endif

		      	#if defined(OPENCV_CUDACODEC_HPP)
		        	#pragma comment(lib, "opencv_cudacodec320.lib")
		      	#endif

		      	#if defined(OPENCV_CUDAFEATURES2D_HPP)
		        	#pragma comment(lib, "opencv_cudafeatures2d320.lib")
		      	#endif

		      	#if defined(OPENCV_CUDAFILTERS_HPP)
		        	#pragma comment(lib, "opencv_cudafilters320.lib")
		      	#endif

		      	#if defined( OPENCV_CUDAIMGPROC_HPP)
		        	#pragma comment(lib, "opencv_cudaimgproc320.lib")
		      	#endif

		      	#if defined(OPENCV_CUDALEGACY_HPP)
		        	#pragma comment(lib, "opencv_cudalegacy320.lib")
		      	#endif

		      	#if defined(OPENCV_CUDAOBJDETECT_HPP)
		        	#pragma comment(lib, "opencv_cudaobjdetect320.lib")
		      	#endif

		      	#if defined(OPENCV_CUDAOPTFLOW_HPP)
		        	#pragma comment(lib, "opencv_cudaoptflow320.lib")
		      	#endif

		      	#if defined(OPENCV_CUDASTEREO_HPP)
		        	#pragma comment(lib, "opencv_cudastereo320.lib")
		      	#endif

		      	#if defined(OPENCV_CUDAWARPING_HPP)
		        	#pragma comment(lib, "opencv_cudawarping320.lib" )
		      	#endif

		      	#if defined(OPENCV_CUDEV_HPP)
		        	#pragma comment(lib, "opencv_cudev320.lib")
		      	#endif

		      	#if defined(OPENCV_DNN_HPP)
		        	#pragma comment(lib, "opencv_dnn320.lib")
		      	#endif

		      	#if defined(__OPENCV_LATENTSVM_HPP__)
		        	#pragma comment(lib, "opencv_dpm320.lib")
		      	#endif

		      	#if defined(__OPENCV_FACE_HPP__)
		        	#pragma comment(lib, "opencv_face320.lib")
		      	#endif

		      	#if defined(OPENCV_FEATURES_2D_HPP)
		        	#pragma comment(lib, "opencv_features2d320.lib")
		      	#endif

		      	#if defined(OPENCV_FLANN_HPP)
		        	#pragma comment(lib, "opencv_flann320.lib")
		      	#endif

		      	#if defined(__OPENCV_FUZZY_H__)
		        	#pragma comment(lib,  "opencv_fuzzy320.lib")
		      	#endif

		      	#if defined(OPENCV_HIGHGUI_HPP)
		        	#pragma comment(lib, "opencv_highgui320.lib")
		      	#endif

		      	#if defined(OPENCV_IMG_HASH_H)
		        	#pragma comment(lib, "opencv_img_hash320.lib")
		      	#endif

		      	#if defined(OPENCV_IMGCODECS_HPP)
		        	#pragma comment(lib, "opencv_imgcodecs320.lib")
		      	#endif

		      	#if defined(OPENCV_IMGPROC_HPP)
		        	#pragma comment(lib, "opencv_imgproc320.lib")
		      	#endif

		      	#if defined(__OPENCV_LINE_DESCRIPTOR_HPP__)
		        	#pragma comment(lib, "opencv_line_descriptor320.lib")
		      	#endif

		      	#if defined(OPENCV_ML_HPP)
		        	#pragma comment(lib, "opencv_ml320.lib" )
		      	#endif

		      	#if defined(OPENCV_OBJDETECT_HPP)
		        	#pragma comment(lib, "opencv_objdetect320.lib")
		      	#endif

		      	#if defined(__OPENCV_OPTFLOW_HPP__)
		        	#pragma comment(lib, "opencv_optflow320.lib" )
		      	#endif

		      	#if defined(OPENCV_PHOTO_HPP)
		        	#pragma comment(lib, "opencv_photo320.lib")
		      	#endif

		      	#if defined(_OPENCV_PLOT_H_)
		        	#pragma comment(lib, "opencv_plot320.lib")
		      	#endif

		      	#if defined(__OPENCV_RGBD_HPP__)
		        	#pragma comment(lib, "opencv_rgbd320.lib" )
		      	#endif

		      	#if defined(__OPENCV_SALIENCY_HPP__)
		        	#pragma comment(lib, "opencv_saliency320.lib")
		      	#endif

		      	#if defined(OPENCV_SHAPE_HPP)
		        	#pragma comment(lib, "opencv_shape320.lib")
		      	#endif

		      	#if defined(__OPENCV_STEREO_HPP__)
		        	#pragma comment(lib, "opencv_stereo320.lib")
		      	#endif

		      	#if defined(OPENCV_STITCHING_STITCHER_HPP)
		        	#pragma comment(lib, "opencv_stitching320.lib")
		      	#endif

		      	#if defined(__OPENCV_STRUCTURED_LIGHT_HPP__)
		        	#pragma comment(lib, "opencv_structured_light320.lib")
		      	#endif

		      	#if defined(OPENCV_SUPERRES_HPP)
		        	#pragma comment(lib, "opencv_superres320.lib")
		      	#endif

		      	#if defined(__OPENCV_SURFACE_MATCHING_HPP__)
		        	#pragma comment(lib, "opencv_surface_matching320.lib")
		      	#endif

		      	#if defined(__OPENCV_TEXT_HPP__)
		        	#pragma comment(lib, "opencv_text320.lib" )
		      	#endif

		      	#if defined(__OPENCV_TRACKING_LENLEN_HPP__)
		        	#pragma comment(lib, "opencv_tracking320.lib" )
		      	#endif

		      	#if defined(OPENCV_VIDEO_HPP)
		        	#pragma comment(lib, "opencv_video320.lib")
		      	#endif

		      	#if defined(OPENCV_VIDEOIO_HPP)
		        	#pragma comment(lib, "opencv_videoio320.lib" )
		      	#endif

		      	#if defined(OPENCV_VIDEOSTAB_HPP)
		        	#pragma comment(lib, "opencv_videostab320.lib")
		      	#endif

		      	#if defined(__OPENCV_XFEATURES2D_HPP__) || defined(__OPENCV_XFEATURES2D_FEATURES_2D_HPP__)
		        	#pragma comment(lib, "opencv_xfeatures2d320.lib")
		      	#endif

		      	#if defined(__OPENCV_XIMGPROC_HPP__)
		        	#pragma comment(lib, "opencv_ximgproc320.lib")
		      	#endif

		      	#if defined(__OPENCV_XOBJDETECT_XOBJDETECT_HPP__)
		        	#pragma comment(lib, "opencv_xobjdetect320.lib")
		      	#endif

		      	#if defined(__OPENCV_XPHOTO_HPP__)
		        	#pragma comment(lib, "opencv_xphoto320.lib")
		      	#endif
	    	#endif // _DEBUG
	  	#endif // _WIN64
	#endif // _AUTO_LINK_LIBS_HPP_

#endif