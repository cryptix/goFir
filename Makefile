#GOROOT := /usr/lib/go
#GOPATH := /Users/cryptix/Documents/go

#myhostname := $(shell hostname)
#ifeq (${myhostname}, laptop)
#    GOPATH := /home/sonia/go/project2
#else ifeq (${myhostname}, testmachine)
#    GOPATH := /home/u1234/go/project2
#    GOROOT := /usr/local/go
#endif

build: build-stamp

## expects that changes are uploaded to the api
WID := 46B03EAE542184E3
simpleFir.sim.h: simpleFir.pshdl
	# requesting sim.h from api
	curl \
		-X POST\
		-d module=de.tuhh.hbubert.noiseCancel.simpleFir\
		http://api.pshdl.org/api/v0.1/compiler/$(WID)/psex/c > simpleFir.sim.h

build-stamp: goFir.go simpleFir.sim.h
	# always format code
	GOPATH=$(GOPATH) go fmt goFir.go goFir_test.go
	# binary
	GOPATH=$(GOPATH) go build
	# install
	GOPATH=$(GOPATH) go install
	# mark as done
	touch $@