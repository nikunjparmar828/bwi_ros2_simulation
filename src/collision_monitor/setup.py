from setuptools import setup

package_name = 'collision_monitor'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    py_modules=[],
    data_files=[
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Your Name',
    maintainer_email='your_email@example.com',
    description='ROS 2 collision detection package for two AMCL-based robots',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'collision_detector = collision_monitor.collision_detector:main',
        ],
    },
)
