import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/nikunj/bwi_ros2_simulation/install/kinect_data_collector'
