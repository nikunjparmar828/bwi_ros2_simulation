from setuptools import find_packages
from setuptools import setup

setup(
    name='bwi_perception_interface',
    version='0.0.0',
    packages=find_packages(
        include=('bwi_perception_interface', 'bwi_perception_interface.*')),
)
