from setuptools import find_packages, setup

package_name = 'bwi_perc'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='bwidemo',
    maintainer_email='nikunjparmar828@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'bwibot_detection_gazebo_r1 = bwi_perc.bwibot_detection_gazebo_r1:main',
            'bwibot_detection_gazebo_r2 = bwi_perc.bwibot_detection_gazebo_r2:main',
        ],
    },
)
