#!/bin/bash

numblk=40
numnode=50
min=48

for i in {1..2}
do
	echo "Experiment Number: $i"
	./waf --run "bitcoin-test --noBlocks=$numblk --nodes=$numnode --tpfidx=$i --miners=$min"
done