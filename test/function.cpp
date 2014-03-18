#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace jsrtwrapperstest
{
    TEST_CLASS(function)
    {
    public:
        MY_TEST_METHOD(empty_handle, "Test an empty function handle.")
        {
            jsrt::function_base handle;
            Assert::AreEqual(handle.handle(), JS_INVALID_REFERENCE);
            Assert::IsFalse(handle.is_valid());
        }

        MY_TEST_METHOD(no_context, "Test calls with no context.")
        {
            jsrt::runtime runtime = jsrt::runtime::create();
            jsrt::context context = runtime.create_context();

            jsrt::function_base base_function;
            jsrt::function<double, std::wstring, double, bool, std::wstring, double, bool, std::wstring, double> f8;
            jsrt::function<double, std::wstring, double, bool, std::wstring, double, bool, std::wstring> f7;
            jsrt::function<double, std::wstring, double, bool, std::wstring, double, bool> f6;
            jsrt::function<double, std::wstring, double, bool, std::wstring, double> f5;
            jsrt::function<double, std::wstring, double, bool, std::wstring> f4;
            jsrt::function<double, std::wstring, double, bool> f3;
            jsrt::function<double, std::wstring, double> f2;
            jsrt::function<double, std::wstring> f1;
            jsrt::function<double> f0;
            jsrt::function<void, std::wstring, double, bool, std::wstring, double, bool, std::wstring, double> f8v;
            jsrt::function<void, std::wstring, double, bool, std::wstring, double, bool, std::wstring> f7v;
            jsrt::function<void, std::wstring, double, bool, std::wstring, double, bool> f6v;
            jsrt::function<void, std::wstring, double, bool, std::wstring, double> f5v;
            jsrt::function<void, std::wstring, double, bool, std::wstring> f4v;
            jsrt::function<void, std::wstring, double, bool> f3v;
            jsrt::function<void, std::wstring, double> f2v;
            jsrt::function<void, std::wstring> f1v;
            jsrt::function<void> f0v;
            jsrt::function<jsrt::object, std::wstring, double, bool, std::wstring, double, bool, std::wstring, double> f8c;
            jsrt::function<jsrt::object, std::wstring, double, bool, std::wstring, double, bool, std::wstring> f7c;
            jsrt::function<jsrt::object, std::wstring, double, bool, std::wstring, double, bool> f6c;
            jsrt::function<jsrt::object, std::wstring, double, bool, std::wstring, double> f5c;
            jsrt::function<jsrt::object, std::wstring, double, bool, std::wstring> f4c;
            jsrt::function<jsrt::object, std::wstring, double, bool> f3c;
            jsrt::function<jsrt::object, std::wstring, double> f2c;
            jsrt::function<jsrt::object, std::wstring> f1c;
            jsrt::function<jsrt::object> f0c;
            jsrt::object this_value;

            TEST_NO_CONTEXT_CALL(jsrt::function_base::create(nullptr));
            TEST_NO_CONTEXT_CALL(base_function(jsrt::value(), {}));
            TEST_NO_CONTEXT_CALL(base_function.construct(jsrt::value(), {}));
            TEST_NO_CONTEXT_CALL((jsrt::function<double, std::wstring, double, bool, std::wstring, double, bool, std::wstring, double>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f8(this_value, L"foo", 2, true, L"bar", 5, false, L"baz", 8)));
            TEST_NO_CONTEXT_CALL((jsrt::function<double, std::wstring, double, bool, std::wstring, double, bool, std::wstring>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f7(this_value, L"foo", 2, true, L"bar", 5, false, L"baz")));
            TEST_NO_CONTEXT_CALL((jsrt::function<double, std::wstring, double, bool, std::wstring, double, bool>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f6(this_value, L"foo", 2, true, L"bar", 5, false)));
            TEST_NO_CONTEXT_CALL((jsrt::function<double, std::wstring, double, bool, std::wstring, double>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f5(this_value, L"foo", 2, true, L"bar", 5)));
            TEST_NO_CONTEXT_CALL((jsrt::function<double, std::wstring, double, bool, std::wstring>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f4(this_value, L"foo", 2, true, L"bar")));
            TEST_NO_CONTEXT_CALL((jsrt::function<double, std::wstring, double, bool>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f3(this_value, L"foo", 2, true)));
            TEST_NO_CONTEXT_CALL((jsrt::function<double, std::wstring, double>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f2(this_value, L"foo", 2)));
            TEST_NO_CONTEXT_CALL((jsrt::function<double, std::wstring>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f1(this_value, L"foo")));
            TEST_NO_CONTEXT_CALL((jsrt::function<double>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f0(this_value)));
            TEST_NO_CONTEXT_CALL((jsrt::function<void, std::wstring, double, bool, std::wstring, double, bool, std::wstring, double>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f8v(this_value, L"foo", 2, true, L"bar", 5, false, L"baz", 8)));
            TEST_NO_CONTEXT_CALL((jsrt::function<void, std::wstring, double, bool, std::wstring, double, bool, std::wstring>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f7v(this_value, L"foo", 2, true, L"bar", 5, false, L"baz")));
            TEST_NO_CONTEXT_CALL((jsrt::function<void, std::wstring, double, bool, std::wstring, double, bool>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f6v(this_value, L"foo", 2, true, L"bar", 5, false)));
            TEST_NO_CONTEXT_CALL((jsrt::function<void, std::wstring, double, bool, std::wstring, double>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f5v(this_value, L"foo", 2, true, L"bar", 5)));
            TEST_NO_CONTEXT_CALL((jsrt::function<void, std::wstring, double, bool, std::wstring>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f4v(this_value, L"foo", 2, true, L"bar")));
            TEST_NO_CONTEXT_CALL((jsrt::function<void, std::wstring, double, bool>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f3v(this_value, L"foo", 2, true)));
            TEST_NO_CONTEXT_CALL((jsrt::function<void, std::wstring, double>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f2v(this_value, L"foo", 2)));
            TEST_NO_CONTEXT_CALL((jsrt::function<void, std::wstring>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f1v(this_value, L"foo")));
            TEST_NO_CONTEXT_CALL((jsrt::function<void>::create(nullptr)));
            TEST_NO_CONTEXT_CALL((f0v(this_value)));
            TEST_NO_CONTEXT_CALL((f8c.construct(L"foo", 2, true, L"bar", 5, false, L"baz", 8)));
            TEST_NO_CONTEXT_CALL((f7c.construct(L"foo", 2, true, L"bar", 5, false, L"baz")));
            TEST_NO_CONTEXT_CALL((f6c.construct(L"foo", 2, true, L"bar", 5, false)));
            TEST_NO_CONTEXT_CALL((f5c.construct(L"foo", 2, true, L"bar", 5)));
            TEST_NO_CONTEXT_CALL((f4c.construct(L"foo", 2, true, L"bar")));
            TEST_NO_CONTEXT_CALL((f3c.construct(L"foo", 2, true)));
            TEST_NO_CONTEXT_CALL((f2c.construct(L"foo", 2)));
            TEST_NO_CONTEXT_CALL((f1c.construct(L"foo")));
            TEST_NO_CONTEXT_CALL((f0c.construct()));

            runtime.dispose();
        }

        MY_TEST_METHOD(invalid_handle, "Test calls with an invalid handle.")
        {
            jsrt::runtime runtime = jsrt::runtime::create();
            jsrt::context context = runtime.create_context();
            {
                jsrt::context::scope scope(context);
                jsrt::function_base func;
                jsrt::function<double, std::wstring, double, bool, std::wstring, double, bool, std::wstring, double> f8;
                jsrt::function<double, std::wstring, double, bool, std::wstring, double, bool, std::wstring> f7;
                jsrt::function<double, std::wstring, double, bool, std::wstring, double, bool> f6;
                jsrt::function<double, std::wstring, double, bool, std::wstring, double> f5;
                jsrt::function<double, std::wstring, double, bool, std::wstring> f4;
                jsrt::function<double, std::wstring, double, bool> f3;
                jsrt::function<double, std::wstring, double> f2;
                jsrt::function<double, std::wstring> f1;
                jsrt::function<double> f0;
                jsrt::function<void, std::wstring, double, bool, std::wstring, double, bool, std::wstring, double> f8v;
                jsrt::function<void, std::wstring, double, bool, std::wstring, double, bool, std::wstring> f7v;
                jsrt::function<void, std::wstring, double, bool, std::wstring, double, bool> f6v;
                jsrt::function<void, std::wstring, double, bool, std::wstring, double> f5v;
                jsrt::function<void, std::wstring, double, bool, std::wstring> f4v;
                jsrt::function<void, std::wstring, double, bool> f3v;
                jsrt::function<void, std::wstring, double> f2v;
                jsrt::function<void, std::wstring> f1v;
                jsrt::function<void> f0v;
                jsrt::function<jsrt::object, std::wstring, double, bool, std::wstring, double, bool, std::wstring, double> f8c;
                jsrt::function<jsrt::object, std::wstring, double, bool, std::wstring, double, bool, std::wstring> f7c;
                jsrt::function<jsrt::object, std::wstring, double, bool, std::wstring, double, bool> f6c;
                jsrt::function<jsrt::object, std::wstring, double, bool, std::wstring, double> f5c;
                jsrt::function<jsrt::object, std::wstring, double, bool, std::wstring> f4c;
                jsrt::function<jsrt::object, std::wstring, double, bool> f3c;
                jsrt::function<jsrt::object, std::wstring, double> f2c;
                jsrt::function<jsrt::object, std::wstring> f1c;
                jsrt::function<jsrt::object> f0c;
                TEST_NULL_ARG_CALL(func(jsrt::value(), {}));
                TEST_NULL_ARG_CALL(func.construct(jsrt::value(), {}));
                TEST_NULL_ARG_CALL((f8(jsrt::value(), L"foo", 2, true, L"bar", 5, false, L"baz", 8)));
                TEST_NULL_ARG_CALL((f7(jsrt::value(), L"foo", 2, true, L"bar", 5, false, L"baz")));
                TEST_NULL_ARG_CALL((f6(jsrt::value(), L"foo", 2, true, L"bar", 5, false)));
                TEST_NULL_ARG_CALL((f5(jsrt::value(), L"foo", 2, true, L"bar", 5)));
                TEST_NULL_ARG_CALL((f4(jsrt::value(), L"foo", 2, true, L"bar")));
                TEST_NULL_ARG_CALL((f3(jsrt::value(), L"foo", 2, true)));
                TEST_NULL_ARG_CALL((f2(jsrt::value(), L"foo", 2)));
                TEST_NULL_ARG_CALL((f1(jsrt::value(), L"foo")));
                TEST_NULL_ARG_CALL((f0(jsrt::value())));
                TEST_NULL_ARG_CALL((f8v(jsrt::value(), L"foo", 2, true, L"bar", 5, false, L"baz", 8)));
                TEST_NULL_ARG_CALL((f7v(jsrt::value(), L"foo", 2, true, L"bar", 5, false, L"baz")));
                TEST_NULL_ARG_CALL((f6v(jsrt::value(), L"foo", 2, true, L"bar", 5, false)));
                TEST_NULL_ARG_CALL((f5v(jsrt::value(), L"foo", 2, true, L"bar", 5)));
                TEST_NULL_ARG_CALL((f4v(jsrt::value(), L"foo", 2, true, L"bar")));
                TEST_NULL_ARG_CALL((f3v(jsrt::value(), L"foo", 2, true)));
                TEST_NULL_ARG_CALL((f2v(jsrt::value(), L"foo", 2)));
                TEST_NULL_ARG_CALL((f1v(jsrt::value(), L"foo")));
                TEST_NULL_ARG_CALL((f0v(jsrt::value())));
                TEST_NULL_ARG_CALL((f8c.construct(L"foo", 2, true, L"bar", 5, false, L"baz", 8)));
                TEST_NULL_ARG_CALL((f7c.construct(L"foo", 2, true, L"bar", 5, false, L"baz")));
                TEST_NULL_ARG_CALL((f6c.construct(L"foo", 2, true, L"bar", 5, false)));
                TEST_NULL_ARG_CALL((f5c.construct(L"foo", 2, true, L"bar", 5)));
                TEST_NULL_ARG_CALL((f4c.construct(L"foo", 2, true, L"bar")));
                TEST_NULL_ARG_CALL((f3c.construct(L"foo", 2, true)));
                TEST_NULL_ARG_CALL((f2c.construct(L"foo", 2)));
                TEST_NULL_ARG_CALL((f1c.construct(L"foo")));
                TEST_NULL_ARG_CALL((f0c.construct()));
            }
            runtime.dispose();
        }

        static jsrt::value base_callback(const jsrt::call_info &info, const std::vector<jsrt::value> &arguments)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            if (((jsrt::object)info.this_value()).is_external())
            {
                void *data = ((jsrt::external_object)info.this_value()).data();
                Assert::AreEqual(data, (void *) 0xdeadbeef);
                Assert::IsFalse(info.is_construct_call());
                return jsrt::number::create(2);
            }
            else
            {
                Assert::IsTrue(info.is_construct_call());
                return jsrt::external_object::create((void *)0xdeadc0de);
            }
        }

        MY_TEST_METHOD(call_info, "Test call_info class.")
        {
            jsrt::runtime runtime = jsrt::runtime::create();
            jsrt::context context = runtime.create_context();
            {
                jsrt::context::scope scope(context);
                jsrt::call_info info;
                Assert::IsFalse(info.callee().is_valid());
                Assert::IsFalse(info.this_value().is_valid());
                Assert::IsFalse(info.is_construct_call());
                info = jsrt::call_info(jsrt::number::create(1), jsrt::number::create(2), true);
                Assert::IsTrue(info.callee().is_valid());
                Assert::IsTrue(info.this_value().is_valid());
                Assert::IsTrue(info.is_construct_call());
            }
            runtime.dispose();
        }

        MY_TEST_METHOD(base, "Test function_base.")
        {
            jsrt::runtime runtime = jsrt::runtime::create();
            jsrt::context context = runtime.create_context();
            {
                jsrt::context::scope scope(context);
                jsrt::function_base func = jsrt::function_base::create(base_callback);
                jsrt::value result = func(jsrt::external_object::create((void *) 0xdeadbeef), { jsrt::number::create(1) });
                Assert::AreEqual(result.type(), JsNumber);
                Assert::AreEqual(((jsrt::number)result).data(), 2.0);

                result = func.construct(jsrt::external_object::create((void *) 0xdeadc0de), { jsrt::number::create(1) });
                Assert::AreEqual(result.type(), JsObject);
                Assert::IsTrue(((jsrt::object)result).is_external());
                Assert::AreEqual(((jsrt::external_object)result).data(), (void *) 0xdeadc0de);
            }
            runtime.dispose();
        }

        static double callback8(const jsrt::call_info &info, std::wstring p1, double p2, bool p3, std::wstring p4, double p5, bool p6, std::wstring p7, double p8)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);
            Assert::AreEqual(p4, (std::wstring)L"bar");
            Assert::AreEqual(p5, 5.0);
            Assert::AreEqual(p6, false);
            Assert::AreEqual(p7, (std::wstring)L"baz");
            Assert::AreEqual(p8, 8.0);

            return 8;
        }

        static double callback7(const jsrt::call_info &info, std::wstring p1, double p2, bool p3, std::wstring p4, double p5, bool p6, std::wstring p7)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);
            Assert::AreEqual(p4, (std::wstring)L"bar");
            Assert::AreEqual(p5, 5.0);
            Assert::AreEqual(p6, false);
            Assert::AreEqual(p7, (std::wstring)L"baz");

            return 7;
        }

        static double callback6(const jsrt::call_info &info, std::wstring p1, double p2, bool p3, std::wstring p4, double p5, bool p6)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);
            Assert::AreEqual(p4, (std::wstring)L"bar");
            Assert::AreEqual(p5, 5.0);
            Assert::AreEqual(p6, false);

            return 6;
        }

        static double callback5(const jsrt::call_info &info, std::wstring p1, double p2, bool p3, std::wstring p4, double p5)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);
            Assert::AreEqual(p4, (std::wstring)L"bar");
            Assert::AreEqual(p5, 5.0);
 
            return 5;
        }

        static double callback4(const jsrt::call_info &info, std::wstring p1, double p2, bool p3, std::wstring p4)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);
            Assert::AreEqual(p4, (std::wstring)L"bar");

            return 4;
        }

        static double callback3(const jsrt::call_info &info, std::wstring p1, double p2, bool p3)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);

            return 3;
        }

        static double callback2(const jsrt::call_info &info, std::wstring p1, double p2)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);

            return 2;
        }

        static double callback1(const jsrt::call_info &info, std::wstring p1)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");

            return 1;
        }

        static double callback0(const jsrt::call_info &info)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            return 0;
        }

        static void callback8v(const jsrt::call_info &info, std::wstring p1, double p2, bool p3, std::wstring p4, double p5, bool p6, std::wstring p7, double p8)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);
            Assert::AreEqual(p4, (std::wstring)L"bar");
            Assert::AreEqual(p5, 5.0);
            Assert::AreEqual(p6, false);
            Assert::AreEqual(p7, (std::wstring)L"baz");
            Assert::AreEqual(p8, 8.0);
        }

        static void callback7v(const jsrt::call_info &info, std::wstring p1, double p2, bool p3, std::wstring p4, double p5, bool p6, std::wstring p7)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);
            Assert::AreEqual(p4, (std::wstring)L"bar");
            Assert::AreEqual(p5, 5.0);
            Assert::AreEqual(p6, false);
            Assert::AreEqual(p7, (std::wstring)L"baz");
        }

        static void callback6v(const jsrt::call_info &info, std::wstring p1, double p2, bool p3, std::wstring p4, double p5, bool p6)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);
            Assert::AreEqual(p4, (std::wstring)L"bar");
            Assert::AreEqual(p5, 5.0);
            Assert::AreEqual(p6, false);
        }

        static void callback5v(const jsrt::call_info &info, std::wstring p1, double p2, bool p3, std::wstring p4, double p5)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);
            Assert::AreEqual(p4, (std::wstring)L"bar");
            Assert::AreEqual(p5, 5.0);
        }

        static void callback4v(const jsrt::call_info &info, std::wstring p1, double p2, bool p3, std::wstring p4)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);
            Assert::AreEqual(p4, (std::wstring)L"bar");
        }

        static void callback3v(const jsrt::call_info &info, std::wstring p1, double p2, bool p3)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);
        }

        static void callback2v(const jsrt::call_info &info, std::wstring p1, double p2)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
        }

        static void callback1v(const jsrt::call_info &info, std::wstring p1)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
        }

        static void callback0v(const jsrt::call_info &info)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(((jsrt::object)info.this_value()).is_external());
            void *data = ((jsrt::external_object)info.this_value()).data();
            Assert::AreEqual(data, (void *) 0xdeadbeef);
            Assert::IsFalse(info.is_construct_call());
        }

        MY_TEST_METHOD(strongly_typed, "Test strongly typed functions.")
        {
            jsrt::runtime runtime = jsrt::runtime::create();
            jsrt::context context = runtime.create_context();
            {
                jsrt::context::scope scope(context);
                jsrt::object this_value = jsrt::external_object::create((void *) 0xdeadbeef);

                auto f8 = jsrt::function<double, std::wstring, double, bool, std::wstring, double, bool, std::wstring, double>::create(callback8);
                double result = f8(this_value, L"foo", 2, true, L"bar", 5, false, L"baz", 8);
                Assert::AreEqual(result, 8.0);

                auto f7 = jsrt::function<double, std::wstring, double, bool, std::wstring, double, bool, std::wstring>::create(callback7);
                result = f7(this_value, L"foo", 2, true, L"bar", 5, false, L"baz");
                Assert::AreEqual(result, 7.0);

                auto f6 = jsrt::function<double, std::wstring, double, bool, std::wstring, double, bool>::create(callback6);
                result = f6(this_value, L"foo", 2, true, L"bar", 5, false);
                Assert::AreEqual(result, 6.0);

                auto f5 = jsrt::function<double, std::wstring, double, bool, std::wstring, double>::create(callback5);
                result = f5(this_value, L"foo", 2, true, L"bar", 5);
                Assert::AreEqual(result, 5.0);

                auto f4 = jsrt::function<double, std::wstring, double, bool, std::wstring>::create(callback4);
                result = f4(this_value, L"foo", 2, true, L"bar");
                Assert::AreEqual(result, 4.0);

                auto f3 = jsrt::function<double, std::wstring, double, bool>::create(callback3);
                result = f3(this_value, L"foo", 2, true);
                Assert::AreEqual(result, 3.0);

                auto f2 = jsrt::function<double, std::wstring, double>::create(callback2);
                result = f2(this_value, L"foo", 2);
                Assert::AreEqual(result, 2.0);

                auto f1 = jsrt::function<double, std::wstring>::create(callback1);
                result = f1(this_value, L"foo");
                Assert::AreEqual(result, 1.0);

                auto f0 = jsrt::function<double>::create(callback0);
                result = f0(this_value);
                Assert::AreEqual(result, 0.0);

                auto f8v = jsrt::function<void, std::wstring, double, bool, std::wstring, double, bool, std::wstring, double>::create(callback8v);
                f8v(this_value, L"foo", 2, true, L"bar", 5, false, L"baz", 8);

                auto f7v = jsrt::function<void, std::wstring, double, bool, std::wstring, double, bool, std::wstring>::create(callback7v);
                f7v(this_value, L"foo", 2, true, L"bar", 5, false, L"baz");

                auto f6v = jsrt::function<void, std::wstring, double, bool, std::wstring, double, bool>::create(callback6v);
                f6v(this_value, L"foo", 2, true, L"bar", 5, false);

                auto f5v = jsrt::function<void, std::wstring, double, bool, std::wstring, double>::create(callback5v);
                f5v(this_value, L"foo", 2, true, L"bar", 5);

                auto f4v = jsrt::function<void, std::wstring, double, bool, std::wstring>::create(callback4v);
                f4v(this_value, L"foo", 2, true, L"bar");

                auto f3v = jsrt::function<void, std::wstring, double, bool>::create(callback3v);
                f3v(this_value, L"foo", 2, true);

                auto f2v = jsrt::function<void, std::wstring, double>::create(callback2v);
                f2v(this_value, L"foo", 2);

                auto f1v = jsrt::function<void, std::wstring>::create(callback1v);
                f1v(this_value, L"foo");

                auto f0v = jsrt::function<void>::create(callback0v);
                f0v(this_value);
            }
            runtime.dispose();
        }

        static jsrt::object callback8c(const jsrt::call_info &info, std::wstring p1, double p2, bool p3, std::wstring p4, double p5, bool p6, std::wstring p7, double p8)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);
            Assert::AreEqual(p4, (std::wstring)L"bar");
            Assert::AreEqual(p5, 5.0);
            Assert::AreEqual(p6, false);
            Assert::AreEqual(p7, (std::wstring)L"baz");
            Assert::AreEqual(p8, 8.0);

            return jsrt::external_object::create((void *)0xdeadbeef);
        }

        static jsrt::object callback7c(const jsrt::call_info &info, std::wstring p1, double p2, bool p3, std::wstring p4, double p5, bool p6, std::wstring p7)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);
            Assert::AreEqual(p4, (std::wstring)L"bar");
            Assert::AreEqual(p5, 5.0);
            Assert::AreEqual(p6, false);
            Assert::AreEqual(p7, (std::wstring)L"baz");

            return jsrt::external_object::create((void *) 0xdeadbeef);
        }

        static jsrt::object callback6c(const jsrt::call_info &info, std::wstring p1, double p2, bool p3, std::wstring p4, double p5, bool p6)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);
            Assert::AreEqual(p4, (std::wstring)L"bar");
            Assert::AreEqual(p5, 5.0);
            Assert::AreEqual(p6, false);

            return jsrt::external_object::create((void *) 0xdeadbeef);
        }

        static jsrt::object callback5c(const jsrt::call_info &info, std::wstring p1, double p2, bool p3, std::wstring p4, double p5)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);
            Assert::AreEqual(p4, (std::wstring)L"bar");
            Assert::AreEqual(p5, 5.0);

            return jsrt::external_object::create((void *) 0xdeadbeef);
        }

        static jsrt::object callback4c(const jsrt::call_info &info, std::wstring p1, double p2, bool p3, std::wstring p4)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);
            Assert::AreEqual(p4, (std::wstring)L"bar");

            return jsrt::external_object::create((void *) 0xdeadbeef);
        }

        static jsrt::object callback3c(const jsrt::call_info &info, std::wstring p1, double p2, bool p3)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);
            Assert::AreEqual(p3, true);

            return jsrt::external_object::create((void *) 0xdeadbeef);
        }

        static jsrt::object callback2c(const jsrt::call_info &info, std::wstring p1, double p2)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");
            Assert::AreEqual(p2, 2.0);

            return jsrt::external_object::create((void *) 0xdeadbeef);
        }

        static jsrt::object callback1c(const jsrt::call_info &info, std::wstring p1)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(info.is_construct_call());

            Assert::AreEqual(p1, (std::wstring)L"foo");

            return jsrt::external_object::create((void *) 0xdeadbeef);
        }

        static jsrt::object callback0c(const jsrt::call_info &info)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(info.is_construct_call());

            return jsrt::external_object::create((void *) 0xdeadbeef);
        }

        MY_TEST_METHOD(strongly_typed_constructors, "Test strongly typed constructor functions.")
        {
            jsrt::runtime runtime = jsrt::runtime::create();
            jsrt::context context = runtime.create_context();
            {
                jsrt::context::scope scope(context);
                auto f8 = jsrt::function<jsrt::object, std::wstring, double, bool, std::wstring, double, bool, std::wstring, double>::create(callback8c);
                jsrt::object result = f8.construct(L"foo", 2, true, L"bar", 5, false, L"baz", 8);
                Assert::IsTrue(result.is_valid());
                Assert::IsTrue(result.is_external());
                Assert::AreEqual(((jsrt::external_object)result).data(), (void *) 0xdeadbeef);

                auto f7 = jsrt::function<jsrt::object, std::wstring, double, bool, std::wstring, double, bool, std::wstring>::create(callback7c);
                result = f7.construct(L"foo", 2, true, L"bar", 5, false, L"baz");
                Assert::IsTrue(result.is_valid());
                Assert::IsTrue(result.is_external());
                Assert::AreEqual(((jsrt::external_object)result).data(), (void *) 0xdeadbeef);

                auto f6 = jsrt::function<jsrt::object, std::wstring, double, bool, std::wstring, double, bool>::create(callback6c);
                result = f6.construct(L"foo", 2, true, L"bar", 5, false);
                Assert::IsTrue(result.is_valid());
                Assert::IsTrue(result.is_external());
                Assert::AreEqual(((jsrt::external_object)result).data(), (void *) 0xdeadbeef);

                auto f5 = jsrt::function<jsrt::object, std::wstring, double, bool, std::wstring, double>::create(callback5c);
                result = f5.construct(L"foo", 2, true, L"bar", 5);
                Assert::IsTrue(result.is_valid());
                Assert::IsTrue(result.is_external());
                Assert::AreEqual(((jsrt::external_object)result).data(), (void *) 0xdeadbeef);

                auto f4 = jsrt::function<jsrt::object, std::wstring, double, bool, std::wstring>::create(callback4c);
                result = f4.construct(L"foo", 2, true, L"bar");
                Assert::IsTrue(result.is_valid());
                Assert::IsTrue(result.is_external());
                Assert::AreEqual(((jsrt::external_object)result).data(), (void *) 0xdeadbeef);

                auto f3 = jsrt::function<jsrt::object, std::wstring, double, bool>::create(callback3c);
                result = f3.construct(L"foo", 2, true);
                Assert::IsTrue(result.is_valid());
                Assert::IsTrue(result.is_external());
                Assert::AreEqual(((jsrt::external_object)result).data(), (void *) 0xdeadbeef);

                auto f2 = jsrt::function<jsrt::object, std::wstring, double>::create(callback2c);
                result = f2.construct(L"foo", 2);
                Assert::IsTrue(result.is_valid());
                Assert::IsTrue(result.is_external());
                Assert::AreEqual(((jsrt::external_object)result).data(), (void *) 0xdeadbeef);

                auto f1 = jsrt::function<jsrt::object, std::wstring>::create(callback1c);
                result = f1.construct(L"foo");
                Assert::IsTrue(result.is_valid());
                Assert::IsTrue(result.is_external());
                Assert::AreEqual(((jsrt::external_object)result).data(), (void *) 0xdeadbeef);

                auto f0 = jsrt::function<jsrt::object>::create(callback0c);
                result = f0.construct();
                Assert::IsTrue(result.is_valid());
                Assert::IsTrue(result.is_external());
                Assert::AreEqual(((jsrt::external_object)result).data(), (void *) 0xdeadbeef);
            }
            runtime.dispose();
        }

        static jsrt::object callback0cp(const jsrt::call_info &info)
        {
            Assert::AreEqual(info.callee().type(), JsFunction);
            Assert::AreEqual(info.this_value().type(), JsObject);
            Assert::IsTrue(info.is_construct_call());

            return jsrt::object();
        }

        MY_TEST_METHOD(constructor_prototype, "Test strongly typed constructor functions with prototypes.")
        {
            jsrt::runtime runtime = jsrt::runtime::create();
            jsrt::context context = runtime.create_context();
            {
                jsrt::context::scope scope(context);
                jsrt::object proto = jsrt::object::create();
                auto f0 = jsrt::function<jsrt::object>::create(callback0cp);
                f0.set_constructor_prototype(proto);
                jsrt::object result = f0.construct();
                Assert::IsTrue(result.is_valid());
                Assert::IsFalse(result.is_external());
                Assert::AreEqual(result.prototype().handle(), f0.constructor_prototype().handle());
            }
            runtime.dispose();
        }
    };
}