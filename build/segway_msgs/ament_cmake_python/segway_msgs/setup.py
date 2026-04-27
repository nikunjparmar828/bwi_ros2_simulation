from setuptools import find_packages
from setuptools import setup

setup(
    name='segway_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('segway_msgs', 'segway_msgs.*')),
)
