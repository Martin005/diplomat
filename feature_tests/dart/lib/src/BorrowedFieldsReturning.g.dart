// generated by diplomat-tool

// https://github.com/dart-lang/sdk/issues/53946
// ignore_for_file: non_native_function_type_argument_to_pointer

part of 'lib.g.dart';

final class _BorrowedFieldsReturningFfi extends ffi.Struct {
  external _SliceUtf8 bytes;
}

final class BorrowedFieldsReturning {
  String bytes;

  BorrowedFieldsReturning({required this.bytes});

  // ignore: unused_element
  // Internal constructor from FFI.
  BorrowedFieldsReturning._(_BorrowedFieldsReturningFfi underlying, core.List<Object> aEdges) :
    bytes = Utf8Decoder().convert(underlying.bytes._pointer.asTypedList(underlying.bytes._length));

  // ignore: unused_element
  // If this struct contains any slices, their lifetime-edge-relevant objects (typically _FinalizedArenas) will only
  // be constructed here, and can be appended to any relevant lifetime arrays here. <lifetime>AppendArray accepts a list
  // of arrays for each lifetime to do so. It accepts multiple lists per lifetime in case the caller needs to tie a lifetime to multiple
  // output arrays. Null is equivalent to an empty list: this lifetime is not being borrowed from.
  _BorrowedFieldsReturningFfi _pointer(ffi.Allocator temp, {core.List<core.List<Object>>? aAppendArray}) {
    final pointer = temp<_BorrowedFieldsReturningFfi>();
    final bytesView = bytes.utf8View;
    pointer.ref.bytes._length = bytesView.length;
    final bytesArena = (aAppendArray != null && !aAppendArray.isEmpty) ? _FinalizedArena.withLifetime(aAppendArray).arena : temp;
    pointer.ref.bytes._pointer = bytesView.pointer(bytesArena);
    return pointer.ref;
  }

  @override
  bool operator ==(Object other) =>
      other is BorrowedFieldsReturning &&
      other.bytes == this.bytes;

  @override
  int get hashCode => Object.hashAll([
        this.bytes,
      ]);

  // ignore: unused element
  // Append all fields corresponding to lifetime `'a` 
  // without handling lifetime dependencies (this is the job of the caller)
  // This is all fields that may be borrowed from if borrowing `'a`,
  // assuming that there are no `'other: a`. bounds. In case of such bounds,
  // the caller should take care to also call _fields_for_lifetime_other()
  core.List<Object> _fields_for_lifetime_a() {
    return [bytes];
  }
}
